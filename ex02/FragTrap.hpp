/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 10:19:32 by dcastor           #+#    #+#             */
/*   Updated: 2025/07/20 10:11:11 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_H__
#define __FRAGTRAP_H__

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap(std::string name);
	FragTrap(const FragTrap &other);
	~FragTrap();
	FragTrap &operator=(const FragTrap &other);

	void highFivesGuys(void);
};

#endif
