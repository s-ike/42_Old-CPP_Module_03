/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikeda <sikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 11:07:53 by sikeda            #+#    #+#             */
/*   Updated: 2021/11/17 14:35:34 by sikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include "ICharacter.hpp"

class AMateria;

class Character : public ICharacter
{
	const static int	MAX = 4;
	AMateria*			_inventory[MAX];
	std::string			_name;

public:
	Character(const std::string& name = "Default");
	Character(const Character& other);
	Character&	operator=(const Character& other);
	virtual		~Character();

	virtual std::string const &	getName() const;
	virtual void				equip(AMateria* m);
	virtual void				unequip(int idx);
	virtual void				use(int idx, ICharacter& target);
};

#endif /* CHARACTER_HPP */
