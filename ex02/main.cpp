/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 21:49:19 by dcastor           #+#    #+#             */
/*   Updated: 2025/07/18 10:28:37 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    FragTrap dd("DD");

    dd.attack("TOTO");
    dd.highFivesGuys();
    dd.takeDamage(3);
    dd.beRepaired(2);
    dd.takeDamage(20);
    dd.beRepaired(100);
    dd.highFivesGuys();
    dd.takeDamage(1000);
    dd.attack("TATA");
    return 0;
}
