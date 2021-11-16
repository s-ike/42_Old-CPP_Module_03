/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikeda <sikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:15:03 by sikeda            #+#    #+#             */
/*   Updated: 2021/11/16 11:50:32 by sikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(const Dog& other);
	Dog&	operator=(const Dog& other);
	virtual	~Dog();

	virtual void	makeSound() const;
};

#endif /* DOG_HPP */
