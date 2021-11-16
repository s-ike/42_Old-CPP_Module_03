/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikeda <sikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:36:16 by sikeda            #+#    #+#             */
/*   Updated: 2021/11/16 23:35:35 by sikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "def_color.h"
#include "Cat.hpp"

/* ************************************************************************** */
/*   coplien's form                                                           */
/* ************************************************************************** */

Cat::Cat()
{
	std::cout << COLOR_MAGENTA "Cat constructor called" COLOR_RESET << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat& other)
{
	std::cout << COLOR_MAGENTA "Cat copy constructor called" COLOR_RESET << std::endl;
	*this = other;
}

Cat&	Cat::operator=(const Cat& other)
{
	std::cout << COLOR_MAGENTA "Cat assignation operator called" COLOR_RESET << std::endl;
	if (this != &other)
	{
		type = other.type;
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << COLOR_MAGENTA "Cat destructor called" COLOR_RESET << std::endl;
}

/* ************************************************************************** */
/*   methods                                                                  */
/* ************************************************************************** */

void	Cat::makeSound() const
{
	std::cout << "meow" << std::endl;
}
