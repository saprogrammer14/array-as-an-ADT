// Definition of functions in ARRAY_H
// BY: Shoumik Acharya

#include"array.h"

template<class T>
void Array<T>::fill()
    {
        std::cout << "\nEnter the elements: ";
        for (int i = 0; i < sz; i++)
            std::cin >> *(arr + i);
    }

template<class T>
void Array<T>::display() const
    {
        std::cout << "{";
        for (int i = 0; i < sz; i++)
        {
            if (i == sz - 1)
                std::cout << *(arr + i);
            else
                std::cout << *(arr + i) << ", ";
        }
        std::cout << "}";
    }

template<class T>
T& Array<T>::operator[](int n)
    {
        if (n < 0 || n >= sz)
        {
            std::cout << "\nout of bounds!";
            exit(1);
        }
        else
            return *(arr + n);
    }