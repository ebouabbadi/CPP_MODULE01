/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 12:57:34 by ebouabba          #+#    #+#             */
/*   Updated: 2022/12/09 12:57:36 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
private:
    std::string name;
    Weapon *weap;

public:
    HumanB(std::string name);
    void    setWeapon(Weapon &weap);
    void attack();
    ~HumanB();
};
