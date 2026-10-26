/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:48:45 by abenrach          #+#    #+#             */
/*   Updated: 2026/10/22 20:38:43 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"

template<typename T>
int easyfind(T &tab, int nb)
{
    typename T::iterator    it_start = tab.begin();
    typename T::iterator    it_end = tab.end();

    for (int i = 0; it_start != it_end; i++)
    {
        if (*it_start == nb)
            return (i);
        it_start++;
    }
    throw std::invalid_argument("Error: Element not found");
}
