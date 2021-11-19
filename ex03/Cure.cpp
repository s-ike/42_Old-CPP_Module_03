/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikeda <sikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 10:55:53 by sikeda            #+#    #+#             */
/*   Updated: 2021/11/19 13:16:12 by sikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "def_color.h"
#include "ICharacter.hpp"
#include "Cure.hpp"

/* ************************************************************************** */
/*   orthodox canonical form                                                  */
/* ************************************************************************** */

Cure::Cure()
	: AMateria("cure")
{
	std::cout << COLOR_CYAN "Cure constructor called" COLOR_RESET << std::endl;
}

Cure::Cure(const Cure& other)
	: AMateria(other._type)
{
	std::cout << COLOR_CYAN "Cure copy constructor called" COLOR_RESET << std::endl;
}

Cure&	Cure::operator=(const Cure& other)
{
	std::cout << COLOR_CYAN "Cure assignation operator called" COLOR_RESET << std::endl;
	(void)other;
	return *this;
}

Cure::~Cure()
{
	std::cout << COLOR_CYAN "Cure destructor called" COLOR_RESET << std::endl;
}

/* ************************************************************************** */
/*   methods                                                                  */
/* ************************************************************************** */

AMateria*	Cure::clone() const
{
	return new Cure();
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
