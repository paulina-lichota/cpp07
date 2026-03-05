/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 17:15:34 by plichota          #+#    #+#             */
/*   Updated: 2026/03/05 17:40:57 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// Implement a function template iter that takes 3 parameters and returns nothing.
// • The first parameter is the address of an array.
// • The second one is the length of the array, passed as a const value.
// • The third one is a function that will be called on every element of the array.
// Submit a main.cpp file that contains your tests. Provide enough code to generate a
// test executable.
// Your iter function template must work with any type of array. The third parameter
// can be an instantiated function template.
// The function passed as the third parameter may take its argument by const reference
// or non-const reference, depending on the context.
// Think carefully about how to support both const and non-const
// elements in your iter function.

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

// typename e class is the same
template <typename T>
void iter(T* arr, const int l, void (*f)(T&))
{
    std::cout << "non const" << std::endl;
    for (int i = 0; i < l; i++)
    {
        f(arr[i]);
    }
}

// Overload const
template <typename T>
void iter(const T* arr, const int l, void (*f)(const T&))
{
    std::cout << "const" << std::endl;
    for (int i = 0; i < l; i++)
    {
        f(arr[i]);
    }
}

#endif