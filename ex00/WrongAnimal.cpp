/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikeda <sikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:21:13 by sikeda            #+#    #+#             */
/*   Updated: 2021/11/16 17:02:13 by sikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "def_color.h"
#include "WrongAnimal.hpp"

/* ************************************************************************** */
/*   coplien's form                                                           */
/* ************************************************************************** */

WrongAnimal::WrongAnimal(const std::string& type)
	: type(type)
{
	std::cout << COLOR_CYAN "WrongAnimal constructor called" COLOR_RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout << COLOR_CYAN "WrongAnimal copy constructor called" COLOR_RESET << std::endl;
	*this = other;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout << COLOR_CYAN "WrongAnimal assignation operator called" COLOR_RESET << std::endl;
	if (this != &other)
	{
		type = other.type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << COLOR_CYAN "WrongAnimal destructor called" COLOR_RESET << std::endl;
}

/* ************************************************************************** */
/*   methods                                                                  */
/* ************************************************************************** */

std::string	WrongAnimal::getType() const
{
	return type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "..." << std::endl;
}
