/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikeda <sikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:38:20 by sikeda            #+#    #+#             */
/*   Updated: 2021/11/17 17:21:45 by sikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <ctime>
#include "def_color.h"
#include "Dog.hpp"

/* ************************************************************************** */
/*   orthodox canonical form                                                  */
/* ************************************************************************** */

Dog::Dog()
{
	std::cout << COLOR_MAGENTA "Dog constructor called" COLOR_RESET << std::endl;
	type = "Dog";
	brain = new Brain;
	std::stringstream	ss;
	ss << '[' << time(NULL) << "] hungry";
	brain->set_ideas(ss.str());
}

Dog::Dog(const Dog& other)
{
	std::cout << COLOR_MAGENTA "Dog copy constructor called" COLOR_RESET << std::endl;
	if (this != &other)
	{
		type = other.type;
		brain = new Brain(*other.brain);
	}
}

Dog&	Dog::operator=(const Dog& other)
{
	std::cout << COLOR_MAGENTA "Dog assignation operator called" COLOR_RESET << std::endl;
	if (this != &other)
	{
		type = other.type;
		delete brain;
		brain = new Brain(*other.brain);
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << COLOR_MAGENTA "Dog destructor called" COLOR_RESET << std::endl;
	delete brain;
}

/* ************************************************************************** */
/*   methods                                                                  */
/* ************************************************************************** */

void	Dog::makeSound() const
{
	std::cout << "bowwow" << std::endl;
}

void	Dog::debug_ideas() const
{
	brain->debug_ideas();
}
