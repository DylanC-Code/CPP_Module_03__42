/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 21:49:19 by dcastor           #+#    #+#             */
/*   Updated: 2025/07/17 22:27:52 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap dd("DD");

    dd.attack("TOTO");
    dd.guardGate();
    dd.takeDamage(3);
    dd.beRepaired(2);
    dd.takeDamage(20);
    dd.beRepaired(100);
    dd.guardGate();
    dd.takeDamage(1000);
    dd.attack("TATA");
    return 0;
}
