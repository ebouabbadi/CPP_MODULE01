/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 12:57:17 by ebouabba          #+#    #+#             */
/*   Updated: 2022/12/09 12:57:19 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapn):weap(weapn){
    this->name = name;
}

HumanA::~HumanA()
{
    // std::cout<<"destruted succes humanA"<<std::endl;
}

void    HumanA::attack()
{
    std::cout<<name<< " attacks with their "<<this->weap.getType()<<std::endl;
}
