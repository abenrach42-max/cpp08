/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:48:45 by abenrach          #+#    #+#             */
/*   Updated: 2026/11/04 20:33:00 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"

template<typename T>
typename T::iterator easyfind(T &tab, int nb)
{
    typename T::iterator elt = std::find(tab.begin(), tab.end(), nb);
    if (elt == tab.end())
        throw std::invalid_argument("Error: Element not found");
    return (elt);
}
