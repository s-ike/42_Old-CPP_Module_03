/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikeda <sikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:13:55 by sikeda            #+#    #+#             */
/*   Updated: 2021/11/16 23:22:20 by sikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal
{
protected:
	std::string	type;

public:
	Animal();
	Animal(const Animal& other);
	Animal&	operator=(const Animal& other);
	virtual	~Animal() = 0;	// pure virtual destructor

	std::string		getType() const;
	virtual void	makeSound() const = 0;	// pure virtual function
};

#endif /* ANIMAL_HPP */
