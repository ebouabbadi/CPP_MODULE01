/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 12:58:43 by ebouabba          #+#    #+#             */
/*   Updated: 2022/12/09 12:58:44 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *strPTR = &str;
    std::string &strREF = *strPTR;


    std::cout<<"The memory address of the str     : "<<&str<<std::endl;
    std::cout<<"The memory address held by strPTR : "<<strPTR<<std::endl;
    std::cout<<"The memory address held by strREF : "<<&strREF<<std::endl;

    std::cout<<"The value of the str           : "<<str<<std::endl;
    std::cout<<"The value pointed to by strPTR : "<<*strPTR<<std::endl;
    std::cout<<"The value pointed to by strREF : "<<strREF<<std::endl;
    return (0);
}