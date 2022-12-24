/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 12:56:53 by ebouabba          #+#    #+#             */
/*   Updated: 2022/12/09 12:56:55 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
    std::string line;
    int pos;
    std::string str;
    std::ifstream infile;
    std::ofstream outfile;
    std::string s1(av[2]);
    std::string s2(av[3]);
    std::string file(av[1]);

    if (ac != 4 || s1.empty() || s2.empty() || file.empty())
        return (0);
    infile.open(file);
    if (infile.fail())
        return (0);
    while (true)
    {
        getline(infile, line);
        if (infile.eof())
        {
            str += line;
            break;
        }
        line += "\n";
        str += line;
    }
    infile.close();
    outfile.open(file + ".replace");
    for (int i = 0; i < str.size(); i++)
    {
        pos = str.find(s1, i);
        if (pos != -1 && pos == i)
        {
            outfile << s2;
            i += s2.size() - 1;
        }
        else
            outfile << str[i];
    }
    outfile.close();
    return (0);
}