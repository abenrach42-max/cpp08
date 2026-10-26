/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:48:47 by abenrach          #+#    #+#             */
/*   Updated: 2026/10/22 20:27:39 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
    std::cout << "==========>VALUE EXIST IN THE LIST<==========" << std::endl;
    try
    {
        std::list<int>  lst;

        lst.push_back(1);
        lst.push_back(2);
        lst.push_back(3);
        
        int i = easyfind(lst, 2);
        std::cout << "occurence is " << i << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "\n==========>VALUE NOT EXIST IN THE LIST<==========" << std::endl;
    try
    {
        std::list<int>  lst;

        lst.push_back(1);
        lst.push_back(2);
        lst.push_back(3);
        
        int i = easyfind(lst, 4);
        std::cout << "occurence is " << i << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}