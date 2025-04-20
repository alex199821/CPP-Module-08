/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 16:23:15 by macbook           #+#    #+#             */
/*   Updated: 2025/04/20 17:02:52 by macbook          ###   ########.fr       */
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
    if(_spanOfNumbers.size() >= _N)
    {
    }
    _spanOfNumbers.push_back(n);
}