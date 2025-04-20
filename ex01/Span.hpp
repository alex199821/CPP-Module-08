/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 17:20:42 by auplisas          #+#    #+#             */
/*   Updated: 2025/04/20 20:26:39 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

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
	// Constructors
	Span();
	Span(unsigned int N);
	~Span();
	Span &operator=(const Span &copy);
	Span(const Span &copy);
	// Extras
	void addNumber(const int n);
	int shortestSpan() const;
	int longestSpan() const;
	//Template
	template <typename InputIterator>
	void addNumbers(InputIterator begin, InputIterator end)
	{
		if (static_cast<size_t>(std::distance(begin, end)) + _spanOfNumbers.size() > _N)
			throw std::runtime_error("Adding this range would exceed Span capacity");
		_spanOfNumbers.insert(_spanOfNumbers.end(), begin, end);
	}
};
