/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 17:18:33 by auplisas          #+#    #+#             */
/*   Updated: 2025/04/20 20:49:24 by macbook          ###   ########.fr       */
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

	std::cout << "Shortest Span: "<< span.shortestSpan() << std::endl;
    std::cout << "Longest Span: "<< span.longestSpan() << std::endl;
    //Test with 10,000 numbers
    std::srand(static_cast<unsigned int>(std::time(0)));

	Span bigSpan(10000);
	for (int i = 0; i < 9995; ++i)
	{
		bigSpan.addNumber(std::rand());
	}

	std::cout << "Shortest Span for 9,995: " << bigSpan.shortestSpan() << std::endl;
	std::cout << "Longest Span for 9,995: " << bigSpan.longestSpan() << std::endl;

    // Testing adding multiple numbers in single call
    std::cout << "\nTesting adding multiple numbers in single call" << std::endl;
    std::vector<int> numbersToAdd = {1, 3, 23, 1293812032, 60};
    try
    {
        bigSpan.addNumbers(numbersToAdd.begin(), numbersToAdd.end());
        std::cout << "After adding numbers with addNumbers:\n";
        std::cout << "Shortest Span for 10,000: " << bigSpan.shortestSpan() << std::endl;
        std::cout << "Longest Span for 10,000: " << bigSpan.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}