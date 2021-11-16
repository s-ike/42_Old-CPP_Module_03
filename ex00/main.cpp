/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikeda <sikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:29:40 by sikeda            #+#    #+#             */
/*   Updated: 2021/11/16 16:58:38 by sikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#define COLOR_RESET	"\033[m"
#define COLOR_CYAN	"\033[36m"

void	print_header(const std::string &str)
{
	std::cout << "\n[ " << str << " ]" << std::endl;
}

int main()
{
	{
		print_header("subject test");

		const Animal*	meta = new Animal();
		const Animal*	j = new Dog();
		const Animal*	i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();

		print_header("destructor test");
		delete meta;
		delete j;
		delete i;
	}
	{
		print_header("WrongAnimal test");

		const WrongAnimal*	meta = new WrongAnimal();
		const WrongAnimal*	i = new WrongCat();

		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		meta->makeSound();

		print_header("destructor test");
		delete meta;
		delete i;
	}
	print_header("===========================");
	{
		print_header("Animal constructor test");
		Animal	a1;
		Animal	a2(a1);
		Animal	a3;
		a3 = a2;
		print_header("Animal destructor test");
	}
	{
		print_header("Derived class constructor test");
		Cat	c1;
		Cat	c2(c1);
		Cat	c3;
		c3 = c2;
		print_header("Derived class destructor test");
	}
}
