/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 21:01:02 by macbook           #+#    #+#             */
/*   Updated: 2025/06/08 19:37:03 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "MutantStack.hpp"

template <typename T> MutantStack<T>::MutantStack() : std::stack<T>()
{
}

template <typename T> MutantStack<T>::~MutantStack()
{
}

template <typename T> MutantStack<T>::MutantStack(const MutantStack &copy) : std::stack<T>(copy)
{
}

template <typename T> MutantStack<T> &MutantStack<T>::operator=(const MutantStack &copy)
{
	if (this != &copy)
		std::stack<T>::operator=(copy);
	return (*this);
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return std::stack<T>::c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return std::stack<T>::c.end();
}