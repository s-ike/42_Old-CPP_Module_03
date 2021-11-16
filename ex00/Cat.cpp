/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikeda <sikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:36:16 by sikeda            #+#    #+#             */
/*   Updated: 2021/11/16 11:37:37 by sikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

/* ************************************************************************** */
/*   coplien's form                                                           */
/* ************************************************************************** */

Cat::Cat()
	: Animal("Cat")
{
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& other)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = other;
}

Cat&	Cat::operator=(const Cat& other)
{
	std::cout << "Cat assignation operator called" << std::endl;
	if (this != &other)
	{
		type = other.type;
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

/* ************************************************************************** */
/*   methods                                                                  */
/* ************************************************************************** */

void	Cat::makeSound() const
{
	std::cout << "meow" << std::endl;
}
