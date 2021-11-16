/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikeda <sikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:13:55 by sikeda            #+#    #+#             */
/*   Updated: 2021/11/16 11:42:19 by sikeda           ###   ########.fr       */
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
	Animal(const std::string& type = "");
	Animal(const Animal& other);
	Animal&	operator=(const Animal& other);
	virtual	~Animal();

	std::string		getType() const;
	virtual void	makeSound() const;
};

#endif /* ANIMAL_HPP */
