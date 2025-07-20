/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 22:02:12 by dcastor           #+#    #+#             */
/*   Updated: 2025/07/20 10:10:51 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap Constructor called" << std::endl;
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other.getName())
{
	*this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
		ClapTrap::operator=(other);
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Deconstructor called" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "😈 ScavTrap is now in Gate keeper mode!" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (!getHitPoints())
	{
		std::cout << "⚠️  ScavTrap " << getName() << " is out of order and cannot attack!" << std::endl;
		return;
	}
	if (!getEnergyPoints())
	{
		std::cout << "🔋 ScavTrap " << getName() << " has no energy left to attack." << std::endl;
		return;
	}
	std::cout
		<< "🔫 ScavTrap " << getName() << " launches an attack on " << target
		<< ", dealing " << getAttackDamage() << " points of damage !" << std::endl;
	setEnergyPoints(getEnergyPoints() - 1);
}
