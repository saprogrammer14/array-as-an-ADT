#include<iostream>
#include<cstdlib>


// Array, as an Abstract Data Type
// By: Shoumik Acharya

#if !defined(ARRAY_H)
#define ARRAY_H

template <class T>
class Array
{
    T* arr;
    int sz;

public:
    Array(int n) : sz(n)
    {
        arr = new T[sz];
    }
    ~Array() { delete[] arr; }

    int size() const { return sz; }


    // Fill the array by taking user input
    void fill();

    //Display entire array
    void display()const;

    // Traverse the Array
    T& operator[](int n);

    // Important Array Operations
    int Linear_search(T) const;
    int Binary_search(T) const;
    void bubble_sort() const;
};

#endif

