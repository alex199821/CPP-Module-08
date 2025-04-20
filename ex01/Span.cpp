/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 16:23:15 by macbook           #+#    #+#             */
/*   Updated: 2025/04/20 18:19:03 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _N(0)
{
}

Span::Span(unsigned int N) : _N(N)
{
}

Span::~Span()
{
}

Span::Span(const Span &copy)
{
	this->_N = copy._N;
	this->_spanOfNumbers = copy._spanOfNumbers;
}

Span &Span::operator=(const Span &copy)
{
	this->_N = copy._N;
	this->_spanOfNumbers = copy._spanOfNumbers;
	return (*this);
}

void Span::addNumber(const int n)
{
	if (_spanOfNumbers.size() >= _N)
	{
		throw std::runtime_error("Can't add more - all spaces in Span are full");
	}
	_spanOfNumbers.push_back(n);
}

int Span::shortestSpan() const
{
	if (_spanOfNumbers.size() < 2)
		throw std::runtime_error("Not enough numbers to find a span");

	std::vector<int> copySpan = _spanOfNumbers;
	std::sort(copySpan.begin(), copySpan.end());

	int minSpan = std::numeric_limits<int>::max();
	for (size_t i = 1; i < copySpan.size(); i++)
	{
		int currentSpan = copySpan[i] - copySpan[i - 1];
		if (currentSpan < minSpan)
			minSpan = currentSpan;
	}

	return (minSpan);
}

int Span::longestSpan() const
{
	if (_spanOfNumbers.size() < 2)
		throw std::runtime_error("Not enough numbers to find a span");

	int minNum = *std::min_element(_spanOfNumbers.begin(),
			_spanOfNumbers.end());
	int maxNum = *std::max_element(_spanOfNumbers.begin(),
			_spanOfNumbers.end());

	return (maxNum - minNum);
}