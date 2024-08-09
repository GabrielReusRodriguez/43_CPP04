/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 20:12:43 by gabriel           #+#    #+#             */
/*   Updated: 2024/08/08 21:30:47 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Brain.hpp"

Brain::Brain(void)
{
	size_t	i;

	i = 0;
	while (i < BRAIN_NUMBER_IDEAS)
	{
		this->_ideas[i] = "";
		i++;
	}
	this->_num_ideas = 0;
	std::cout << "Brain Default Constructor called."  << std::endl;	
}

Brain::Brain(Brain const &copy)
{
	size_t	i;

	i = 0;
	while (i < BRAIN_NUMBER_IDEAS)
	{
		this->_ideas[i] = copy._ideas[i];
		i++;
	}
	this->_num_ideas = copy._num_ideas;
	std::cout << "Brain Copy Constructor called." << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain Destructor called." << std::endl;
}

void Brain::operator=(Brain const &brain)
{
	size_t	i;

	i = 0;
	while (i < BRAIN_NUMBER_IDEAS)
	{
		this->_ideas[i] = brain._ideas[i];
		i++;
	}
	this->_num_ideas = brain._num_ideas;
	std::cout << "Brain operator equal called." << std::endl;
}

void	Brain::appendIdea(std::string idea)
{
	if (this->_num_ideas >= BRAIN_NUMBER_IDEAS)
		this->_num_ideas = 0;
	this->_ideas[this->_num_ideas] = idea;
	this->_num_ideas++;
	std::cout << "Brain added Idea." << std::endl;
}

std::string	Brain::rememberIdea(size_t i)
{
	if (i >= this->_num_ideas)
	{
		std::cout << "Brain: requesting bad number of idea." << std::endl;
		return ("");
	}
	return (this->_ideas[i]);
}