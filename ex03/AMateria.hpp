/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikeda <sikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 00:22:58 by sikeda            #+#    #+#             */
/*   Updated: 2021/11/17 13:16:28 by sikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>

class ICharacter;

class AMateria
{
protected:
	std::string	_type;

public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(AMateria const & other);
	AMateria	&operator=(AMateria const & other);
	virtual		~AMateria() = 0;

	std::string const &	getType() const; //Returns the materia type

	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target);
};

#endif /* AMATERIA_HPP */
