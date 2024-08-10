/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 19:45:37 by gabriel           #+#    #+#             */
/*   Updated: 2024/08/10 19:54:15 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Cure.hpp"

/*
		Cure(void);
		Cure(Cure const &copy);
		~Cure(void);
		void	operator=(Cure const &cure);

		AMateria *clone(void) const = 0;
		void	use(ICharacter& target);
		*/

Cure::Cure(void) : AMateria(TYPE_CURE)
{

}

Cure::Cure(Cure const &copy) : AMateria(TYPE_CURE)
{
	(void) copy;
}

Cure::~Cure(void)
{
	
}

void	Cure::operator=(Cure const &cure)
{
	(void) cure;
}

AMateria	*Cure::clone(void) const
{
	AMateria	*materia;
	
	materia = new Cure();
	return (materia);	
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;	
}