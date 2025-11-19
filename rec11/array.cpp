//This is the implementation file: Array.cpp.
//This is the implementation of the template class Array.
//The interface for the template class Array is in the file Array.h.

#include "array.h"
#include <iostream>
using std::cout;


template<class T>
Array<T>::Array( ) :capacity(50), used(0)
{
    a = new T[capacity];
}

template<class T>
Array<T>::Array(int size) :capacity(size), used(0)
{
    a = new T[capacity];
}

template<class T>
Array<T>::Array(const Array<T>& pfaObject)
    :capacity(pfaObject.getCapacity( )), used(pfaObject.getNumberUsed( ))
{
    a = new T[capacity];
    for (int i =0; i < used; i++)
        a[i] = pfaObject.a[i];
}

template<class T>
void Array<T>::addElement(T element)
{
    if (used >= capacity)
    {
        cout << "Attempt to exceed capacity in Array.\n";
        exit(0);
    }
    a[used] = element;
    used++;
}

template<class T>
bool Array<T>::full( ) const
{
    return (capacity == used);
}

template<class T>
int Array<T>::getCapacity( ) const
{
    return capacity;
}

template<class T>
int Array<T>::getNumberUsed( ) const
{
    return used;
}

template<class T>
void Array<T>::emptyArray( )
{
    used = 0;
}

template<class T>
T& Array<T>::operator[](int index)
{
    if (index >= used)
    {
        cout << "Illegal index in Array.\n";
        exit(0);
    }

    return a[index];
}

template<class T>
Array<T>& Array<T>::operator =(const Array<T>& rightSide)
{
    if (capacity != rightSide.capacity)
    {
        delete [] a;
        a = new T[rightSide.capacity];
    }

    capacity = rightSide.capacity;
    used = rightSide.used;
    for (int i = 0; i < used; i++)
        a[i] = rightSide.a[i];

    return *this;
}

template<class T>
Array<T>::~Array( )
{
    delete [] a;
}
