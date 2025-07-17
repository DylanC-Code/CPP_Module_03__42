/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 21:23:50 by dcastor           #+#    #+#             */
/*   Updated: 2025/07/17 21:47:11 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(const std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Constructor called" << std::endl;
}
ClapTrap::~ClapTrap()
{
    std::cout << "Deconstructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (_hitPoints == 0)
    {
        std::cout
            << "⚠️ ClapTrap " << _name << " is out of order and cannot attack!" << std::endl;
        return;
    }
    if (_energyPoints == 0)
    {
        std::cout
            << "🔋 ClapTrap " << _name << " has no energy left to attack." << std::endl;
        return;
    }
    std::cout
        << "🔫 ClapTrap " << _name
        << " launches an attack on " << target
        << ", dealing " << _attackDamage
        << " points of damage!" << std::endl;

    _energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " is already destroyed and can't take more damage!" << std::endl;
        return;
    }
    std::cout
        << "ClapTrap " << _name
        << " takes " << amount
        << " points of damage!" << std::endl;

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
        std::cout
            << "ClapTrap " << _name
            << " is destroyed and cannot repair itself!" << std::endl;
        return;
    }

    if (_energyPoints == 0)
    {
        std::cout
            << "ClapTrap " << _name
            << " has no energy left to repair itself!" << std::endl;
        return;
    }

    _hitPoints += amount;
    _energyPoints--;

    std::cout
        << "ClapTrap " << _name
        << " repairs itself, recovering "
        << amount << " hit points!" << std::endl;
};
