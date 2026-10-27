/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 22:48:27 by abenrach          #+#    #+#             */
/*   Updated: 2026/10/26 22:48:27 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
    std::srand(std::time(NULL));
    try
    {
        Span x(10000);

        for (int i = 0; i < 10000; i++)
            x.addNumber(std::rand());
        std::cout << x.longestSpan() << std::endl;
        std::cout << x.shortestSpan() << std::endl; // on voit bien que le temps d'execution prend un certain temps
    }                                               // mais ca se compte en dixieme de seconde donc
    catch (std::exception &e)                       // j'en ai conclus que c'est pas necessaire de changer la complexite de mon programe
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}