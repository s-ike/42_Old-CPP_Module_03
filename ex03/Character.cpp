/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikeda <sikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 11:14:47 by sikeda            #+#    #+#             */
/*   Updated: 2021/11/17 17:21:45 by sikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "def_color.h"
#include "AMateria.hpp"
#include "Character.hpp"

/* ************************************************************************** */
/*   orthodox canonical form                                                  */
/* ************************************************************************** */

Character::Character(const std::string& name)
	: _name(name)
{
	std::cout << COLOR_CYAN "Character constructor called" COLOR_RESET << std::endl;
	for (int i = 0; i < MAX; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character& other)
	: _name(other._name)
{
	std::cout << COLOR_CYAN "Character copy constructor called" COLOR_RESET << std::endl;
	for (int i = 0; i < MAX; i++)
	{
		_inventory[i] = NULL;
		if (other._inventory[i])
			_inventory[i] = other._inventory[i]->clone();
	}
}

Character&	Character::operator=(const Character& other)
{
	std::cout << COLOR_CYAN "Character assignation operator called" COLOR_RESET << std::endl;
	if (this != &other)
	{
		_name = other._name;
		for (int i = 0; i < MAX; i++)
		{
			delete _inventory[i];
			_inventory[i] = NULL;
			if (other._inventory[i])
				_inventory[i] = other._inventory[i]->clone();
		}
	}
	return *this;
}

Character::~Character()
{
	std::cout << COLOR_CYAN "Character destructor called" COLOR_RESET << std::endl;
	for (int i = 0; i < MAX; i++)
	{
		delete _inventory[i];
		_inventory[i] = NULL;
	}
}

/* ************************************************************************** */
/*   methods                                                                  */
/* ************************************************************************** */

std::string const &	Character::getName() const
{
	return _name;
}

void	Character::equip(AMateria* m)
{
	if (!m)
	{
		std::cout << COLOR_RED "No equipment" COLOR_RESET << std::endl;
		return;
	}

	for (int i = 0; i < MAX; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			std::cout << COLOR_GREEN
				<< _name << " equipped with a "
				<< m->getType()
				<< COLOR_RESET
				<< std::endl;
			return;
		}
	}
	std::cout << COLOR_RED "Inventory is full" COLOR_RESET << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || MAX <= idx || !_inventory[idx])
	{
		std::cout << COLOR_RED "Invalid index" COLOR_RESET << std::endl;
		return;
	}

	std::cout << COLOR_GREEN
		<< _name << " unequipped a "
		<< _inventory[idx]->getType()
		<< COLOR_RESET
		<< std::endl;
	_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || MAX <= idx || !_inventory[idx])
	{
		std::cout << COLOR_RED "Invalid index" COLOR_RESET << std::endl;
		return;
	}

	std::cout << COLOR_YELLOW;
	_inventory[idx]->use(target);
	std::cout << COLOR_RESET;
}
