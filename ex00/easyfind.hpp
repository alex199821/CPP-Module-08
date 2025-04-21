/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 17:20:42 by auplisas          #+#    #+#             */
/*   Updated: 2025/04/20 21:01:19 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <vector>

template <typename T> typename T::const_iterator easyfind(const T &intContainer,
	int numberToFind)
{
	auto foundPosition = std::find(intContainer.begin(), intContainer.end(),
			numberToFind);

	if (foundPosition == intContainer.end())
	{
		throw std::runtime_error("Number not found in the container.");
	}

	return (foundPosition);
}