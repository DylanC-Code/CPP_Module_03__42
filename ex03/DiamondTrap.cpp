/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 09:41:37 by dcastor           #+#    #+#             */
/*   Updated: 2025/07/20 10:17:22 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
	std::cout << "DiamondTrap Constructor called" << std::endl;
};

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other.getName() + "_clap_name"), ScavTrap(other), FragTrap(other), _name(other._name)
{
	*this = other;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
		_name = other._name;
	}
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Deconstructor called" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "My DiamondTrap name is " << _name << "!!!" << std::endl;
	std::cout << "My ClapTrap name is " << this->getName() << "!!!" << std::endl;
};
