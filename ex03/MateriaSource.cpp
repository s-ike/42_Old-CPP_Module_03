/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikeda <sikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:29:38 by sikeda            #+#    #+#             */
/*   Updated: 2021/11/17 17:21:45 by sikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "def_color.h"
#include "MateriaSource.hpp"

/* ************************************************************************** */
/*   orthodox canonical form                                                  */
/* ************************************************************************** */

MateriaSource::MateriaSource()
{
	std::cout << COLOR_CYAN "MateriaSource constructor called" COLOR_RESET << std::endl;
	for (int i = 0; i < MAX; i++)
		_materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	std::cout << COLOR_CYAN "MateriaSource copy constructor called" COLOR_RESET << std::endl;
	for (int i = 0; i < MAX; i++)
	{
		_materias[i] = NULL;
		if (other._materias[i])
			_materias[i] = other._materias[i]->clone();
	}
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& other)
{
	std::cout << COLOR_CYAN "MateriaSource assignation operator called" COLOR_RESET << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < MAX; i++)
		{
			delete _materias[i];
			_materias[i] = NULL;
			if (other._materias[i])
				_materias[i] = other._materias[i]->clone();
		}
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	std::cout << COLOR_CYAN "MateriaSource destructor called" COLOR_RESET << std::endl;
	for (int i = 0; i < MAX; i++)
	{
		delete _materias[i];
		_materias[i] = NULL;
	}
}

/* ************************************************************************** */
/*   methods                                                                  */
/* ************************************************************************** */

void	MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < MAX; i++)
	{
		if (!_materias[i])
		{
			_materias[i] = m->clone();
			std::cout << COLOR_GREEN
				<< "Materia sourse learned "
				<< m->getType()
				<< COLOR_RESET
				<< std::endl;
			return;
		}
	}
	std::cout << COLOR_RED "Materia source is full" COLOR_RESET << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < MAX; i++)
	{
		if (_materias[i] && type == _materias[i]->getType())
		{
			std::cout << COLOR_GREEN
				<< "Materia sourse creates "
				<< _materias[i]->getType()
				<< COLOR_RESET
				<< std::endl;
			return _materias[i]->clone();
		}
	}
	std::cout << COLOR_RED "Invalid materia type" COLOR_RESET << std::endl;
	return 0;
}
