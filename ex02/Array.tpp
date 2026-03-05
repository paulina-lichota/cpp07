/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 18:00:53 by plichota          #+#    #+#             */
/*   Updated: 2026/03/05 18:13:42 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// arr(0) is arr(NULL)
template <class T>
Array<T>::Array() : arr(0) {}

template <class T>
Array<T>::Array(unsigned int n) : arr(new T[n]) {}

template <class T>
Array<T>::Array(const Array& other) : arr(new T[other.size()]) {
    for (unsigned int i = 0; i < other.size(); ++i)
        arr[i] = other.arr[i];
}

template <class T>
Array<T>& Array<T>::operator=(const Array<T>& other) {
    if (this != &other)
    {
        delete [] arr;
        arr = new T[other.size()];
        for (unsigned int i = 0; i < other.size(); ++i)
            arr[i] = other.arr[i];
    }
    return *this;
}

template <class T>
Array<T>::~Array() {
    delete [] arr;
}

