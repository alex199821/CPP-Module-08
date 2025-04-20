/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 17:18:33 by auplisas          #+#    #+#             */
/*   Updated: 2025/04/20 18:23:03 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
    //Standard mini test
	Span span = Span(5);
	span.addNumber(6);
	span.addNumber(3);
	span.addNumber(17);
	span.addNumber(9);
    span.addNumber(11);
	try
	{
		span.addNumber(31);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << span.shortestSpan() << std::endl;
	std::cout << span.longestSpan() << std::endl;
    //Test with 10,000 numbers
    std::srand(static_cast<unsigned int>(std::time(0)));

	Span bigSpan(10000);
	for (int i = 0; i < 10000; ++i)
	{
		bigSpan.addNumber(std::rand());
	}

	std::cout << "Shortest Span for 10,000: " << bigSpan.shortestSpan() << std::endl;
	std::cout << "Longest Span for 10,000: " << bigSpan.longestSpan() << std::endl;
	return (0);
}