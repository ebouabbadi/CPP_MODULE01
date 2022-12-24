/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 12:59:23 by ebouabba          #+#    #+#             */
/*   Updated: 2022/12/12 16:13:37 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <cstdlib>

class Zombie
{
private:
    std::string name;

public:
    Zombie(void);
    ~Zombie();
    void nameobj(std::string name);
    void announce();
};

Zombie *zombieHorde(int N, std::string name);

#endif