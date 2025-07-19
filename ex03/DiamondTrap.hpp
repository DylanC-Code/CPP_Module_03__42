/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 09:36:47 by dcastor           #+#    #+#             */
/*   Updated: 2025/07/19 09:40:51 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMONDTRAP_H__
#define __DIAMONDTRAP_H__

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ClapTrap, public FragTrap
{
private:
    std::string _name;

public:
    DiamondTrap(std::string name);
    ~DiamondTrap();

    void whoAmI();
};

#endif
