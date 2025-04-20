/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 17:20:42 by auplisas          #+#    #+#             */
/*   Updated: 2025/04/20 16:54:37 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

class Span
{
  private:
	unsigned int _N;
	std::vector<int> _spanOfNumbers;
  public:
	//Constructors
	Span();
	Span(unsigned int N);
	~Span();
	Span &operator=(const Span &copy);
	Span(const Span &copy);
	//Extras
	void addNumber(const int n);
};

// template <typename T> typename T::const_iterator easyfind(const T &intContainer,
// 	int numberToFind)
// {
// 	auto foundPosition = std::find(intContainer.begin(), intContainer.end(),
// 			numberToFind);

// 	if (foundPosition == intContainer.end())
// 	{
// 		throw std::runtime_error("Number not found in the container.");
// 	}

// 	return (foundPosition);
// }