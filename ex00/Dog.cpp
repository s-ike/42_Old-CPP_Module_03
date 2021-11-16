/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikeda <sikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:38:20 by sikeda            #+#    #+#             */
/*   Updated: 2021/11/16 11:39:15 by sikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

/* ************************************************************************** */
/*   coplien's form                                                           */
/* ************************************************************************** */

Dog::Dog()
	: Animal("Dog")
{
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& other)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = other;
}

Dog&	Dog::operator=(const Dog& other)
{
	std::cout << "Dog assignation operator called" << std::endl;
	if (this != &other)
	{
		type = other.type;
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

/* ************************************************************************** */
/*   methods                                                                  */
/* ************************************************************************** */

void	Dog::makeSound() const
{
	std::cout << "bowwow" << std::endl;
}
