/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 22:38:54 by gabriel           #+#    #+#             */
/*   Updated: 2024/08/09 22:41:57 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>

class AMateria
{
	protected:
		std::string _type;
	
	public:
		AMateria(std::string  const &type);
		std::string const & getType(void) const;
		virtual AMateria *clone(void) const = 0;
		virtual void	use(ICharacter& target);

};

#endif