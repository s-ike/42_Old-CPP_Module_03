/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikeda <sikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:24:22 by sikeda            #+#    #+#             */
/*   Updated: 2021/11/17 15:29:11 by sikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	const static int	MAX = 4;
	AMateria*			_materias[MAX];

public:
	MateriaSource();
	MateriaSource(const MateriaSource& other);
	MateriaSource&	operator=(const MateriaSource& other);
	virtual			~MateriaSource();

	virtual void		learnMateria(AMateria*);
	virtual AMateria*	createMateria(std::string const & type);
};

#endif /* MATERIASOURCE_HPP */
