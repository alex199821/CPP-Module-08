/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 18:44:37 by macbook           #+#    #+#             */
/*   Updated: 2025/06/08 19:37:06 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
    private:
    public:
    	// Constructors
        MutantStack();
        ~MutantStack();
        MutantStack &operator=(const MutantStack &copy);
        MutantStack(const MutantStack &copy);
        //Iterators
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin(void);
        iterator end(void);
};

#include "MutantStack.tpp"
