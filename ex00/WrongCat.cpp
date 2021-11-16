/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikeda <sikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:02:24 by sikeda            #+#    #+#             */
/*   Updated: 2021/11/16 17:02:54 by sikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "def_color.h"
#include "WrongCat.hpp"

/* ************************************************************************** */
/*   coplien's form                                                           */
/* ************************************************************************** */

WrongCat::WrongCat()
	: WrongAnimal("WrongCat")
{
	std::cout << COLOR_MAGENTA "WrongCat constructor called" COLOR_RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat& other)
{
	std::cout << COLOR_MAGENTA "WrongCat copy constructor called" COLOR_RESET << std::endl;
	*this = other;
}

WrongCat&	WrongCat::operator=(const WrongCat& other)
{
	std::cout << COLOR_MAGENTA "WrongCat assignation operator called" COLOR_RESET << std::endl;
	if (this != &other)
	{
		type = other.type;
	}
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << COLOR_MAGENTA "WrongCat destructor called" COLOR_RESET << std::endl;
}

/* ************************************************************************** */
/*   methods                                                                  */
/* ************************************************************************** */

void	WrongCat::makeSound() const
{
	std::cout << "meow" << std::endl;
}
