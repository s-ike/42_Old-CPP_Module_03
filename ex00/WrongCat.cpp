#include <iostream>
#include "WrongCat.hpp"

/* ************************************************************************** */
/*   coplien's form                                                           */
/* ************************************************************************** */

WrongCat::WrongCat()
	: WrongAnimal("WrongCat")
{
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = other;
}

WrongCat&	WrongCat::operator=(const WrongCat& other)
{
	std::cout << "WrongCat assignation operator called" << std::endl;
	if (this != &other)
	{
		type = other.type;
	}
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

/* ************************************************************************** */
/*   methods                                                                  */
/* ************************************************************************** */

void	WrongCat::makeSound() const
{
	std::cout << "meow" << std::endl;
}
