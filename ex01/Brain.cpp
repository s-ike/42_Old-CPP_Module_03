/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikeda <sikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 13:03:08 by sikeda            #+#    #+#             */
/*   Updated: 2021/11/16 22:19:13 by sikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "def_color.h"
#include "Brain.hpp"

/* ************************************************************************** */
/*   coplien's form                                                           */
/* ************************************************************************** */

Brain::Brain()
{
	std::cout << COLOR_BLUE "Brain constructor called" COLOR_RESET << std::endl;
}

Brain::Brain(const Brain& other)
{
	std::cout << COLOR_BLUE "Brain copy constructor called" COLOR_RESET << std::endl;
	*this = other;
}

Brain&	Brain::operator=(const Brain& other)
{
	std::cout << COLOR_BLUE "Brain assignation operator called" COLOR_RESET << std::endl;
	if (this != &other)
		for (int i = 0; i < MAX; i++)
			ideas[i] = other.ideas[i];
	return *this;
}

Brain::~Brain()
{
	std::cout << COLOR_BLUE "Brain destructor called" COLOR_RESET << std::endl;
}

/* ************************************************************************** */
/*   methods                                                                  */
/* ************************************************************************** */

void	Brain::set_ideas(const std::string& idea)
{
	for (int i = 0; i < MAX; i++)
		ideas[i] = idea;
}

void	Brain::debug_ideas() const
{
	std::cout << "ideas[0]: " << ideas[0] << ", ideas[99]: " << ideas[99] << std::endl;
}
