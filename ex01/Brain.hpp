/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikeda <sikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:53:59 by sikeda            #+#    #+#             */
/*   Updated: 2021/11/16 22:19:24 by sikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain
{
	const static int	MAX = 100;
	std::string			ideas[MAX];

public:
	Brain();
	Brain(const Brain& other);
	Brain&	operator=(const Brain& other);
	~Brain();

	void	set_ideas(const std::string& idea);
	void	debug_ideas() const;
};

#endif /* BRAIN_HPP */
