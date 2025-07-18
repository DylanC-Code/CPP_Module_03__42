/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 10:22:07 by dcastor           #+#    #+#             */
/*   Updated: 2025/07/18 10:25:55 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap Constructor called" << std::endl;
    setHitPoints(100);
    setEnergyPoints(100);
    setAttackDamage(30);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Deconstructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "High-Fives GUYS !!!!!!!!!! 🙏" << std::endl;
}
