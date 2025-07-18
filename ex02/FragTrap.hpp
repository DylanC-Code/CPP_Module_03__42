/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 10:19:32 by dcastor           #+#    #+#             */
/*   Updated: 2025/07/18 10:21:16 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_H__
#define __FRAGTRAP_H__

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap(std::string name);
    ~FragTrap();

    void highFivesGuys(void);
};

#endif
