//This is the header file Array.h. This is the interface for the class
//Array. Objects of this type are partially filled arrays with base type T.
#ifndef ARRAY_H
#define ARRAY_H

template<class T>
class Array
{
public:
    Array( ); //Initializes with a capacity of 50.

    Array(int capacityValue);

    Array(const Array<T>& pfaObject);

    void addElement(T element);
    //Precondition: The array is not full.
    //Postcondition: The element has been added.

    bool full( ) const; //Returns true if the array is full, false otherwise.

    int getCapacity( ) const;

    int getNumberUsed( ) const;

    void emptyArray( );
    //Resets the number used to zero, effectively emptying the array.

    T& operator[](int index);
    //Read and change access to elements 0 through numberUsed - 1.

    Array<T>& operator =(const Array<T>& rightSide);

    virtual ~Array( );
private:
    T *a; //for an array of T.
    int capacity; //for the size of the array.
    int used; //for the number of array positions currently in use.
};
#endif //Array_H