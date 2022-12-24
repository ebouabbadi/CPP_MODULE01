/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 12:59:26 by ebouabba          #+#    #+#             */
/*   Updated: 2022/12/12 16:13:42 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    Zombie *newZombie;

    if (N <= 0)
        exit(0);
    newZombie = new Zombie[N];
    if (!newZombie)
        exit(1);
    for (int i = 0; i < N; i++)
        newZombie[i].nameobj(name);

    return (newZombie);
}
