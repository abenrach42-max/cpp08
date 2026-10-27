/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 21:40:28 by abenrach          #+#    #+#             */
/*   Updated: 2026/10/26 21:40:28 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N): _size_max(N), _size_nb(0)
{
    if (N > 0)
        this->_tab_int = new int[N]();
    else
        this->_tab_int = NULL;
    //std::cout << "Span constructor called" << std::endl;
}

Span::Span(const Span &src)
{
    *this = src;
}

Span    &Span::operator=(const Span &src)
{
    if (this != &src)
    {
        int *new_tab = NULL;
        if (src._size_max > 0)
        {
            new_tab = new int[src._size_max]();
            for (unsigned int i = 0; i < src._size_nb; i++)
                this->_tab_int[i] = src._tab_int[i];
        
        }
        if (this->_tab_int != NULL) // en soit cette condition n'est pas necessaire le delete ne provoque pas de crash si il delete un pointeur vers NULL
            delete[] this->_tab_int;
        this->_tab_int = new_tab;
        this->_size_nb = src._size_nb;
        this->_size_max = src._size_max;
    }
    return (*this);
}

void    Span::addNumber(int nb)
{
    if (this->_size_nb >= this->_size_max)
        throw std::out_of_range("Error: We cant add number because span is full !!!!!!!!!!!!!");
    this->_size_nb++;
    this->_tab_int[this->_size_nb - 1] = nb;
    return ;
}

int Span::longestSpan(void)
{
    if (this->_size_nb <= 1)
        throw std::logic_error("Error: Span is empty or have just 1 element");
    int max_nb = this->_tab_int[0];
    int min_nb = this->_tab_int[0];
    for (unsigned int i = 0; i < this->_size_nb; i++)
    {
        if (min_nb > this->_tab_int[i])
            min_nb = this->_tab_int[i];
        if (max_nb < this->_tab_int[i])
            max_nb = this->_tab_int[i];
    }
    return (max_nb - min_nb);
}

int Span::shortestSpan(void)
{
    if (this->_size_nb <= 1)
        throw std::logic_error("Error: Span is empty or have just 1 element");
    int tmp;
    int shortest = std::max(this->_tab_int[0], this->_tab_int[1]) - std::min(this->_tab_int[0], this->_tab_int[1]);
    for (unsigned int i = 0; i < this->_size_nb - 1; i++)
    {
        for (unsigned int j = i + 1; j < this->_size_nb; j++)
        {
            tmp = std::max(this->_tab_int[i], this->_tab_int[j]) - std::min(this->_tab_int[i], this->_tab_int[j]);
            if (tmp < shortest)
                shortest = tmp;
        }
    }
    return (shortest);
}

Span::~Span(void)
{
    if (this->_tab_int != NULL) //ici aussi pas necessaire mais bon je prefere le mettre pour me rappeler ce cas de figure
        delete[]    this->_tab_int;
    //std::cout << "Span destructor called" << std::endl;
}