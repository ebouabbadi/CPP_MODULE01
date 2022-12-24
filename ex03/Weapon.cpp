/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 12:58:18 by ebouabba          #+#    #+#             */
/*   Updated: 2022/12/09 12:58:20 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
    std::cout << "create default constractor" << std::endl;
}

Weapon::Weapon(std::string type)
{
    std::cout << "create parametres constractor" << std::endl;
    this->setType(type);
}

void Weapon::setType(std::string type)
{
    this->type = type;
}

const std::string &Weapon::getType()
{
    return (this->type);
}

Weapon::~Weapon()
{
    // std::cout<<"destroted succes 1"<<std::endl;
}
