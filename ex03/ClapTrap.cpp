/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 21:23:50 by dcastor           #+#    #+#             */
/*   Updated: 2025/07/20 10:14:03 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(const std::string name) : _name(name), _hitPoints(10),
											 _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	*this = other;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Deconstructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	return *this;
}

void ClapTrap::attack(const std::string &target)
{
	if (_hitPoints == 0)
	{
		std::cout << "⚠️  ClapTrap " << _name << " is out of order and cannot attack!" << std::endl;
		return;
	}
	if (_energyPoints == 0)
	{
		std::cout << "🔋 ClapTrap " << _name << " has no energy left to attack." << std::endl;
		return;
	}
	std::cout << "🔫 ClapTrap " << _name << " launches an attack on " << target
			  << ", dealing " << _attackDamage << " points of damage !" << std::endl;
	_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " is already destroyed and can't take more damage!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
	if (_hitPoints <= amount)
		_hitPoints = 0;
	else
		_hitPoints -= amount;
	if (_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " has been destroyed!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " is destroyed and cannot repair itself!" << std::endl;
		return;
	}
	if (_energyPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " has no energy left to repair itself!" << std::endl;
		return;
	}
	_hitPoints += amount;
	_energyPoints--;
	std::cout << "ClapTrap " << _name
			  << " repairs itself, recovering " << amount << " hit points !" << std::endl;
};

const std::string &ClapTrap::getName() const
{
	return _name;
}
void ClapTrap::setHitPoints(unsigned int hitPoints)
{
	_hitPoints = hitPoints;
}

unsigned int ClapTrap::getHitPoints()
{
	return (_hitPoints);
}

void ClapTrap::setEnergyPoints(unsigned int energyPoints)
{
	_energyPoints = energyPoints;
}

unsigned int ClapTrap::getEnergyPoints()
{
	return (_energyPoints);
}

void ClapTrap::setAttackDamage(unsigned int attackDamage)
{
	_attackDamage = attackDamage;
}

unsigned int ClapTrap::getAttackDamage()
{
	return _attackDamage;
}
