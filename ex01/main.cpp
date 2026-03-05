/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 17:16:02 by plichota          #+#    #+#             */
/*   Updated: 2026/03/05 17:40:42 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

void print(int& x)
{
    std::cout << x << std::endl;
};

void print(const int& x)
{
    std::cout << x << std::endl;
};

void print(float& x)
{
    std::cout << x << std::endl;
}


int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    float arr2[] = {1.1, 2.2, 3.3, 4.4, 5.5};

    void (*foo) (int&) = print;
    void (*foo2) (const int&) = print; // binding a const reference - compilatore crea una reference const a oggetto senza cast esplicito
    void (*foo3) (float&) = print; // binding a const reference - compilatore crea una reference const a oggetto senza cast esplicito

    ::iter(arr, 5, foo );
    ::iter(arr, 5, foo2 );
    ::iter(arr2, 5, foo3 );
}