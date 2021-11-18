/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikeda <sikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:36:16 by sikeda            #+#    #+#             */
/*   Updated: 2021/11/18 15:11:07 by sikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <ctime>
#include "def_color.h"
#include "Cat.hpp"

/* ************************************************************************** */
/*   orthodox canonical form                                                  */
/* ************************************************************************** */

Cat::Cat()
{
	std::cout << COLOR_MAGENTA "Cat constructor called" COLOR_RESET << std::endl;
	type = "Cat";
	brain = new Brain;
	std::stringstream	ss;
	ss << '[' << time(NULL) << "] sleeply";
	brain->set_ideas(ss.str());
}

Cat::Cat(const Cat& other)
{
	std::cout << COLOR_MAGENTA "Cat copy constructor called" COLOR_RESET << std::endl;
	if (this != &other)
	{
		type = other.type;
		brain = new Brain(*other.brain);
	}
}

Cat&	Cat::operator=(const Cat& other)
{
	std::cout << COLOR_MAGENTA "Cat assignation operator called" COLOR_RESET << std::endl;
	if (this != &other)
	{
		type = other.type;
		// delete brain;
		// brain = new Brain(*other.brain);
		*brain = *other.brain;
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << COLOR_MAGENTA "Cat destructor called" COLOR_RESET << std::endl;
	delete brain;
}

/* ************************************************************************** */
/*   methods                                                                  */
/* ************************************************************************** */

void	Cat::makeSound() const
{
	std::cout << "meow" << std::endl;
}

void	Cat::debug_ideas() const
{
	brain->debug_ideas();
}
