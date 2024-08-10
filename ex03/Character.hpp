/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 22:50:25 by gabriel           #+#    #+#             */
/*   Updated: 2024/08/10 21:24:47 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

# define CHARACTER_MAX_MATERIAS	4

class Character : public ICharacter
{

	private:
		AMateria	*_inventory[CHARACTER_MAX_MATERIAS];
		std::string	_name;
		size_t		_index;

		bool	isInventoryFull(void);
		bool	isInventoryEmpty(void);
	public:
	
		Character(void);
		Character(std::string name);
		Character(Character const &copy);
		~Character(void);
		void	operator=(Character const &character);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif