/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 12:57:30 by ebouabba          #+#    #+#             */
/*   Updated: 2022/12/09 12:57:31 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
}

void HumanB::setWeapon(Weapon &weap)
{
    this->weap = &weap;
}

void    HumanB::attack()
{
    std::cout<<name<< " attacks with their "<<this->weap->getType()<<std::endl;
}

HumanB::~HumanB()
{
    // std::cout<<"destruted succes humanB"<<std::endl;
}

#endif