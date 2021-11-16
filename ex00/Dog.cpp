/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikeda <sikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:38:20 by sikeda            #+#    #+#             */
/*   Updated: 2021/11/16 17:00:23 by sikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "def_color.h"
#include "Dog.hpp"

/* ************************************************************************** */
/*   coplien's form                                                           */
/* ************************************************************************** */

Dog::Dog()
	: Animal("Dog")
{
	std::cout << COLOR_MAGENTA "Dog constructor called" COLOR_RESET << std::endl;
}

Dog::Dog(const Dog& other)
{
	std::cout << COLOR_MAGENTA "Dog copy constructor called" COLOR_RESET << std::endl;
	*this = other;
}

Dog&	Dog::operator=(const Dog& other)
{
	std::cout << COLOR_MAGENTA "Dog assignation operator called" COLOR_RESET << std::endl;
	if (this != &other)
	{
		type = other.type;
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << COLOR_MAGENTA "Dog destructor called" COLOR_RESET << std::endl;
}

/* ************************************************************************** */
/*   methods                                                                  */
/* ************************************************************************** */

void	Dog::makeSound() const
{
	std::cout << "bowwow" << std::endl;
}
