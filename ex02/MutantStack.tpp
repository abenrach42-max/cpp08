/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 04:17:27 by abenrach          #+#    #+#             */
/*   Updated: 2026/11/05 04:17:27 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template<typename T, typename Container>
MutantStack<T, Container>::MutantStack(void) : std::stack<T, Container>(){}

template<typename T, typename Container>
typename Container::iterator    MutantStack<T, Container>::begin(void)
{
    return (this->c.begin());
}

template<typename T, typename Container>
typename Container::iterator    MutantStack<T, Container>::end(void)
{
    return (this->c.end());
}

template<typename T, typename Container>
MutantStack<T, Container>::MutantStack(const MutantStack &src) : std::stack<T, Container>(src){}

template<typename T, typename Container>
MutantStack<T, Container> &MutantStack<T, Container>::operator=(const MutantStack &src)
{
    if (this != &src)
    {
        std::stack<T, Container>::operator=(src);
    }
    return (*this);
}

template<typename T, typename Container>
MutantStack<T, Container>::~MutantStack(void){}