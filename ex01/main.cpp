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
    std::srand(std::time(NULL));\
    std::cout << "Ceci est le RAND_MAX: " << RAND_MAX << "\n\n" << std::endl;
    try
    {
        Span x(10);

        std::cout << "Voici le Span : (ci dessous)" << std::endl;
        std::cout << "[";
        for (int i = 0; i < 10; i++)
        {
            int tmp = std::rand();
            x.addNumber(tmp);
            if (i + 1 == 10)
                std::cout << tmp;
            else
                std::cout << tmp << ", ";
        }
        std::cout << "]" << std::endl;
        std::cout << "LongestSpan : " << x.longestSpan() << std::endl;
        std::cout << "ShortestSpan : " <<x.shortestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        std::cout << "\nVoici le Span : (ci dessous)" << std::endl;
        Span    x = Span(4);

        x.addNumber(1);
        x.addNumber(7);
        x.addNumber(14);
        x.addNumber(3);
        std::cout << "[1, 7, 14, 3]" << std::endl;
        std::cout << "LongestSpan : " << x.longestSpan() << std::endl;
        std::cout << "ShortestSpan : " <<x.shortestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}