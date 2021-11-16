/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikeda <sikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:30:30 by sikeda            #+#    #+#             */
/*   Updated: 2021/11/16 22:19:55 by sikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	Brain*	brain;

public:
	Cat();
	Cat(const Cat& other);
	Cat&	operator=(const Cat& other);
	virtual	~Cat();

	virtual void	makeSound() const;
	void			debug_ideas() const;
};

#endif /* CAT_HPP */
