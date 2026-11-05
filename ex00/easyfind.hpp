/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:48:42 by abenrach          #+#    #+#             */
/*   Updated: 2026/11/04 20:29:58 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <exception>
# include <list>
# include <cstdlib>
# include <algorithm>

template<typename T>
typename T::iterator easyfind(T &tab, int nb);

# include "easyfind.tpp"

#endif