/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 04:17:29 by abenrach          #+#    #+#             */
/*   Updated: 2026/11/05 04:17:29 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// J'ai decouvert aussi qu'on peut utiliser #pragma once pour evite le #ifndef #define et #endif 

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>
# include <list>
# include <vector>
# include <exception>
# include <cstdlib>
# include <algorithm>

template<typename T, typename Container = std::deque<T> >                         // oublions pas que typename et class c'est la meme chose
class   MutantStack : public    std::stack<T, Container>
{
    public:
        typedef typename Container::iterator iterator; // typedef permet de dire que iterator = typename Container::iterator
        iterator    begin(void);
        iterator    end();
        MutantStack(void);
        MutantStack(const MutantStack &src);
        MutantStack &operator=(const MutantStack &src);
        ~MutantStack(void);
};

# include "MutantStack.tpp"

#endif