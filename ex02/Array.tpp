/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 18:00:53 by plichota          #+#    #+#             */
/*   Updated: 2026/03/06 17:46:50 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// arr(0) is arr(NULL)
template <class T>
Array<T>::Array() : arr(0), _size(0) {}

// T() chiama default constructor di T, quindi inizializza col valore di default
template <class T>
Array<T>::Array(unsigned int n) : arr(new T[n]), _size(n)
{
    for (unsigned int i = 0; i < n; ++i)
        arr[i] = T();
}

template <class T>
Array<T>::Array(const Array& other) : arr(new T[other.size()]), _size(other.size())
{
    for (unsigned int i = 0; i < other.size(); ++i)
        arr[i] = other.arr[i];
}

template <class T>
Array<T>& Array<T>::operator=(const Array<T>& other) {
    if (this != &other)
    {
        delete [] arr; // libero memoria allocata nel costruttore
        arr = new T[other.size()];
        _size = other.size();
        for (unsigned int i = 0; i < other.size(); ++i)
            arr[i] = other.arr[i];
    }
    return *this;
}

template <class T>
Array<T>::~Array() {
    delete [] arr;
}

template <class T>
const T& Array<T>::operator[](unsigned int index) const
{
    if (index >= _size)
        throw std::out_of_range("Index out of bounds");
    return arr[index];
}

template <class T>
unsigned int Array<T>::size() const
{
    return _size;
}