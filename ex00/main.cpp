/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:48:47 by abenrach          #+#    #+#             */
/*   Updated: 2026/11/04 20:50:41 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
    std::list<int>  lst;

    lst.push_back(1);
    lst.push_back(2);
    lst.push_back(3);
        
    std::cout << "==========>VALUE EXIST IN THE LIST<==========" << std::endl;
    try
    {
        std::list<int>::iterator it = easyfind(lst, 3);
        std::cout << "Value " << *it << " exist" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "\n==========>VALUE NOT EXIST IN THE LIST<==========" << std::endl;
    try
    {
        std::list<int>::iterator it = easyfind(lst, 4);
        std::cout << "Value " << *it << "exist" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}