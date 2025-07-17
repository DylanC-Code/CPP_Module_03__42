/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 21:24:13 by dcastor           #+#    #+#             */
/*   Updated: 2025/07/17 21:33:50 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#ifndef __CLAPTRAP_H__
#define __CLAPTRAP_H__

class ClapTrap
{
private:
    std::string _name;
    unsigned int _hitPoints; // Health
    unsigned int _energyPoints;
    unsigned int _attackDamage;

public:
    ClapTrap(const std::string name);
    ~ClapTrap();

    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif
