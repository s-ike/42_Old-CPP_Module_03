/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikeda <sikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 00:32:42 by sikeda            #+#    #+#             */
/*   Updated: 2021/11/17 17:21:45 by sikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "def_color.h"
#include "ICharacter.hpp"
#include "AMateria.hpp"

/* ************************************************************************** */
/*   orthodox canonical form                                                  */
/* ************************************************************************** */

AMateria::AMateria()
{
	std::cout << COLOR_CYAN "AMateria default constructor called" COLOR_RESET << std::endl;
}

AMateria::AMateria(std::string const & type)
	: _type(type)
{
	std::cout << COLOR_CYAN "AMateria constructor called" COLOR_RESET << std::endl;
}

AMateria::AMateria(AMateria const & other)
	: _type(other._type)
{
	std::cout << COLOR_CYAN "AMateria copy constructor called" COLOR_RESET << std::endl;
	(void)other;
}

AMateria&	AMateria::operator=(AMateria const & other)
{
	std::cout << COLOR_CYAN "AMateria assignation operator called" COLOR_RESET << std::endl;
	(void)other;
	return *this;
}

AMateria::~AMateria()
{
	std::cout << COLOR_CYAN "AMateria destructor called" COLOR_RESET << std::endl;
}

/* ************************************************************************** */
/*   methods                                                                  */
/* ************************************************************************** */

std::string const &	AMateria::getType() const
{
	return _type;
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "AMateria called use() for " << target.getName() << std::endl;
}
