/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 17:44:41 by plichota          #+#    #+#             */
/*   Updated: 2026/03/06 18:25:14 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <string>

class Test {
    public:
        Test() : a(0) {}
        Test(int a) : a(a) {}
        int a;
};

std::ostream& operator<<(std::ostream& os, const Test& t) {
    os << t.a;
    return os;
}

int main()
{
    // Try to compile int * a = new int(); then display *a
    {
        std::cout << GREEN << "===== Creo array ======" << RESET << std::endl;
        Array<int> a(5);
        a.print();

        std::cout << GREEN << "===== Size ======" << RESET << std::endl;        
        std::cout << "size a: " << a.size() << std::endl;

        std::cout << GREEN << "===== Esempio copy constructor ======" << RESET << std::endl;
        Array<int> b(a);
        b.print();
        std::cout << "size b: " << b.size() << std::endl;

        std::cout << GREEN << "===== Modifying copy (b) does not affect original (a) ======" << RESET << std::endl;
        b = Array<int>(7);
        for (size_t i = 0; i < 7; i++)
            b[i] = i;
        std::cout << "size b: " << b.size() << std::endl;
        b.print();
        std::cout << "size a: " << a.size() << std::endl;
        a.print();

        std::cout << GREEN << "===== Modifying original (a) does not affect copy (b) ======" << RESET << std::endl;
        a[0] = 42;
        std::cout << "a[0] = " << a[0] << std::endl;
        std::cout << "b[0] = " << b[0] << std::endl;

        std::cout << GREEN << "===== Esempio assignment operator = ======" << RESET << std::endl;
        a = b;
        std::cout << "size b: " << b.size() << std::endl;
        b.print();
        std::cout << "size a: " << a.size() << std::endl;
        a.print();

        std::cout << GREEN << "===== Esempio subscript operator [] ======" << RESET << std::endl;
        for (size_t i = 0; i < a.size(); i++)
            std::cout << "a[" << i << "] = " << a[i] << std::endl;

        std::cout << GREEN << "===== Esempio std::exception index out of bounds ======" << RESET << std::endl;
        try
        {
            std::cout << a[10] << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << MAGENTA << e.what() << RESET << '\n';
        }
    }
    {
        std::cout << GREEN << "===== Esempio con array di oggetti ======" << RESET << std::endl;
        Array<Test> tests(5);
        for (size_t i = 0; i < tests.size(); i++)
            tests[i] = Test(i);
        tests.print();

        std::cout << GREEN << "===== Esempio con costruttore di copia (oggetti) ======" << RESET << std::endl;
        Array<Test> tests2(tests);
        tests2.print();

        std::cout << GREEN << "===== Modificare copia non ha effetto su originale ======" << RESET << std::endl;
        tests[2] = Test(42);
        std::cout << "tests[2] = " << tests[2] << std::endl;
        std::cout << "tests2[2] = " << tests2[2] << std::endl;
    }
}