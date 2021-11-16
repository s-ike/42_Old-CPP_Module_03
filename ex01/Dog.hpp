/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikeda <sikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:15:03 by sikeda            #+#    #+#             */
/*   Updated: 2021/11/16 22:41:58 by sikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	Brain*	brain;

public:
	Dog();
	Dog(const Dog& other);
	Dog&	operator=(const Dog& other);
	virtual	~Dog();

	virtual void	makeSound() const;
	void			debug_ideas() const;
};

#endif /* DOG_HPP */
