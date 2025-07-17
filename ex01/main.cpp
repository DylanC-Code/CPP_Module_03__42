/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 21:49:19 by dcastor           #+#    #+#             */
/*   Updated: 2025/07/17 21:51:09 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
int main(void)
{
    ClapTrap dd("DD");

    dd.attack("TOTO");
    dd.takeDamage(3);
    dd.beRepaired(2);
    dd.takeDamage(20);
    dd.beRepaired(100);
    dd.attack("TATA");
    return 0;
}
