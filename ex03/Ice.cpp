/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikeda <sikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 00:56:14 by sikeda            #+#    #+#             */
/*   Updated: 2021/11/17 13:20:21 by sikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "def_color.h"
#include "ICharacter.hpp"
#include "Ice.hpp"

/* ************************************************************************** */
/*   coplien's form                                                           */
/* ************************************************************************** */

Ice::Ice()
	: AMateria("ice")
{
	std::cout << COLOR_CYAN "Ice constructor called" COLOR_RESET << std::endl;
}

Ice::Ice(const Ice& other)
{
	std::cout << COLOR_CYAN "Ice copy constructor called" COLOR_RESET << std::endl;
	_type = other._type;
}

Ice&	Ice::operator=(const Ice& other)
{
	std::cout << COLOR_CYAN "Ice assignation operator called" COLOR_RESET << std::endl;
	(void)other;
	return *this;
}

Ice::~Ice()
{
	std::cout << COLOR_CYAN "Ice destructor called" COLOR_RESET << std::endl;
}

/* ************************************************************************** */
/*   methods                                                                  */
/* ************************************************************************** */

AMateria*	Ice::clone() const
{
	return new Ice();
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
