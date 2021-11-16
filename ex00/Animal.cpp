/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikeda <sikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:21:13 by sikeda            #+#    #+#             */
/*   Updated: 2021/11/16 23:34:56 by sikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "def_color.h"
#include "Animal.hpp"

/* ************************************************************************** */
/*   coplien's form                                                           */
/* ************************************************************************** */

Animal::Animal()
	: type("Animal")
{
	std::cout << COLOR_CYAN "Animal constructor called" COLOR_RESET << std::endl;
}

Animal::Animal(const Animal& other)
{
	std::cout << COLOR_CYAN "Animal copy constructor called" COLOR_RESET << std::endl;
	*this = other;
}

Animal&	Animal::operator=(const Animal& other)
{
	std::cout << COLOR_CYAN "Animal assignation operator called" COLOR_RESET << std::endl;
	if (this != &other)
	{
		type = other.type;
	}
	return *this;
}

Animal::~Animal()
{
	std::cout << COLOR_CYAN "Animal destructor called" COLOR_RESET << std::endl;
}

/* ************************************************************************** */
/*   methods                                                                  */
/* ************************************************************************** */

std::string	Animal::getType() const
{
	return type;
}

void	Animal::makeSound() const
{
	std::cout << "..." << std::endl;
}
