/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auplisas <auplisas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 18:44:34 by macbook           #+#    #+#             */
/*   Updated: 2025/06/15 15:53:54 by auplisas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int	main(void)
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	
	std::cout << "\n=== Additional Tests ===" << std::endl;
	
	std::cout << "\n--- Copy Constructor Test ---" << std::endl;
	MutantStack<int> mstack2(mstack);
	std::cout << "Original size: " << mstack.size() << std::endl;
	std::cout << "Copy size: " << mstack2.size() << std::endl;
	
	std::cout << "\n--- Assignment Operator Test ---" << std::endl;
	MutantStack<int> mstack3;
	mstack3.push(99);
	mstack3 = mstack;
	std::cout << "Assigned stack size: " << mstack3.size() << std::endl;
	
	std::cout << "\n--- Empty Stack Test ---" << std::endl;
	MutantStack<int> empty_stack;
	std::cout << "Empty stack size: " << empty_stack.size() << std::endl;
	std::cout << "Empty begin == end: " << (empty_stack.begin() == empty_stack.end()) << std::endl;
	
	std::cout << "\n--- String Stack Test ---" << std::endl;
	MutantStack<std::string> str_stack;
	str_stack.push("Hello");
	str_stack.push("World");
	str_stack.push("Test");
	
	for (MutantStack<std::string>::iterator str_it = str_stack.begin(); str_it != str_stack.end(); ++str_it)
	{
		std::cout << *str_it << " ";
	}
	std::cout << std::endl;
	
	std::cout << "\n--- Reverse Iteration Test ---" << std::endl;
	MutantStack<int> rev_stack;
	for (int i = 1; i <= 5; ++i)
		rev_stack.push(i);
	
	MutantStack<int>::iterator rev_it = rev_stack.end();
	--rev_it;
	std::cout << "Reverse order: ";
	while (rev_it != rev_stack.begin())
	{
		std::cout << *rev_it << " ";
		--rev_it;
	}
	std::cout << *rev_it << std::endl;
	
	return (0);
}

// #include <list>

// std::list<int> mstack;
// mstack.push_back(5);
// mstack.push_back(17);
// std::cout << mstack.back() << std::endl;
// mstack.pop_back();
// std::cout << mstack.size() << std::endl;
// mstack.push_back(3);
// mstack.push_back(5);
// mstack.push_back(737);
// //[...]
// mstack.push_back(0);
// std::list<int>::iterator it = mstack.begin();
// std::list<int>::iterator ite = mstack.end();
// ++it;
// --it;
// while (it != ite)
// {
// 	std::cout << *it << std::endl;
// 	++it;
// }