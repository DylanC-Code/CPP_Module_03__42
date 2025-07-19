/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 09:41:37 by dcastor           #+#    #+#             */
/*   Updated: 2025/07/19 10:02:19 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
    std::cout << "DiamondTrap Constructor called" << std::endl;
};

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Deconstructor called" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "My DiamondTrap name is " << _name << "!!!" << std::endl;
    std::cout << "My ClapTrap name is " << this->getName() << "!!!" << std::endl;
};
