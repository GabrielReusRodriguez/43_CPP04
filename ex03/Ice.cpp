/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 19:54:33 by gabriel           #+#    #+#             */
/*   Updated: 2024/08/10 20:01:22 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Ice.hpp"


Ice::Ice(void) : AMateria(TYPE_ICE)
{
	
}

Ice::Ice(Ice const &copy) : AMateria(TYPE_ICE)
{
	(void) copy;
}

Ice::~Ice(void)
{
	
}

void	Ice::operator=(Ice const &ice)
{
	(void)ice;
}

AMateria	*Ice::clone(void) const
{
	AMateria	*materia;

	materia = new Ice();
	return (materia);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;	
}