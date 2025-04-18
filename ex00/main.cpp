/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 17:18:33 by auplisas          #+#    #+#             */
/*   Updated: 2025/04/18 02:24:12 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    try {
        auto position = easyfind(numbers, 3);
        std::cout << "Found number: " << *position << std::endl;
    } catch (const std::exception& error) {
        std::cerr << error.what() << std::endl;
    }


    try {
        auto position = easyfind(numbers, 121);
        std::cout << "Found number: " << *position << std::endl;
    } catch (const std::exception& error) {
        std::cerr << error.what() << std::endl;
    }

    return 0;
}