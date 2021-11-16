/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikeda <sikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:56:59 by sikeda            #+#    #+#             */
/*   Updated: 2021/11/16 11:56:59 by sikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

# include <string>

class WrongAnimal
{
protected:
	std::string	type;

public:
	WrongAnimal(const std::string& type = "");
	WrongAnimal(const WrongAnimal& other);
	WrongAnimal&	operator=(const WrongAnimal& other);
	~WrongAnimal();

	std::string	getType() const;
	void		makeSound() const;
};

#endif /* WRONGANIMAL_HPP */
