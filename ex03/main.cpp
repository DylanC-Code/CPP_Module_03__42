/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 21:49:19 by dcastor           #+#    #+#             */
/*   Updated: 2025/07/19 09:58:53 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap dd("DD");

    dd.attack("TOTO");
    dd.highFivesGuys();
    dd.guardGate();
    dd.whoAmI();
    dd.takeDamage(3);
    dd.beRepaired(2);
    dd.takeDamage(20);
    dd.beRepaired(100);
    dd.highFivesGuys();
    dd.takeDamage(1000);
    dd.attack("TATA");
    return 0;
}
