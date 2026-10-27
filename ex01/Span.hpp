/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 21:28:43 by abenrach          #+#    #+#             */
/*   Updated: 2026/10/26 21:28:43 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <exception>
# include <cstdlib>
# include <climits>

class Span
{
    private:
        int                     *_tab_int;
        unsigned int            _size_max; // c'est la size max que peut contenir au total mon span
        unsigned int            _size_nb; // c'est la size actuelle qu'a mon span (donc au debut 0)
    public:
        Span(unsigned int N);
        Span(const Span &src);
        Span    &operator=(const Span &src);
        void    addNumber(int nb);
        // int     shortestSpan(void);
        int     longestSpan(void);
        ~Span(void);
};

#endif