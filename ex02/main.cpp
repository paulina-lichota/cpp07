/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 17:44:41 by plichota          #+#    #+#             */
/*   Updated: 2026/03/06 17:19:16 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <string>

int main()
{
    // Try to compile int * a = new int(); then display *a
    Array<int> a(5);

    //onstruction by copy and assignment operator. In both cases, modifying either the
    // original array or its copy after copying musn’t affect the other array

    // Elements can be accessed through the subscript operator: [ ].

    // When accessing an element with the [ ] operator, if its index is out of bounds, an
    // std::exception is thrown.

    // size()
}