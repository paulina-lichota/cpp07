/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 17:44:38 by plichota          #+#    #+#             */
/*   Updated: 2026/03/05 18:12:32 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

// I have to put declaration in the .hpp or .tpp file because the compiler needs
// to see all the code of the template. .cpp files are compiled later.

template <class T>
class Array
{
    private:
        T* arr;
    public:
        Array();
        Array(unsigned int n);
        Array(const Array& other);
        Array& operator=(const Array& other);
        ~Array();
};

#include "Array.tpp"

#endif