/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 18:44:37 by macbook           #+#    #+#             */
/*   Updated: 2025/04/20 18:49:58 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class MutantStack
{
    private:
    public:
    	// Constructors
        MutantStack();
        ~MutantStack();
        MutantStack &operator=(const MutantStack &copy);
        MutantStack(const MutantStack &copy);
};