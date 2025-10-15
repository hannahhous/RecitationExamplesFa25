#include <iostream>
#include <iomanip>
using namespace std;

class Arr 
{
    // Adding iostream overloading
    friend ostream &operator<<( ostream &, const Arr & );
    friend istream &operator>>( istream &, Arr & );
public:
    Arr(int s);
    ~Arr();
    Arr(const Arr& other);
    Arr& operator=(const Arr& other);
    int getSize() const;
    void set(int index, int value);
    void resize(int newSize);
    void print() const;

    // adding [] operator overload
    // subscript operator for non-const objects returns lvalue
    int &operator[]( int );              

    // subscript operator for const objects returns rvalue
    const int &operator[]( int ) const; 
private:
    int* data;
    int size;
};



// overloaded subscript operator for non-const arrays
// reference return creates an lvalue so can be used to modify data
int &Arr::operator[]( int index )
{
   if ( index < 0 || index >= size )
   {
      cout << "\n index out of range" << endl;
      exit( 1 ); // stop program
   }
    cout << "using non-const [] overload" << endl;
    return data[ index ]; // reference return
}


// overloaded subscript operator for const arrays
// const reference return creates an rvalue so can only be used to read data
const int &Arr::operator[]( int index ) const
{
   if ( index < 0 || index >= size )
   {
      cout << "\n index out of range" << endl;
      exit( 1 ); // stop program
   }

    cout << "using const [] overload" << endl;
    return data[ index ]; // const reference return
}

// overloaded input operator for class Array
istream &operator>>( istream &is, Arr &array )
{
   for ( int i = 0; i < array.size; i++ )
      is >> array.data[ i ];

   return is;
}

// overloaded output operator for class Array 
ostream &operator<<( ostream &os, const Arr &array )
{
    for(int i = 0; i < array.size; i++) {
        os << array.data[i] << ", ";
    }
    return os;
}


Arr::Arr(int s)
{
    size = s;
    data = new int[size];
    for (int i = 0; i < size; ++i) 
    {
        data[i] = 0;
    }
}

Arr::~Arr() 
{
    delete[] data;
}

// copy constructor
Arr::Arr(const Arr& other) 
{
    size = other.size;
    data = new int[size];
    for (int i = 0; i < size; ++i) 
    {
        data[i] = other.data[i];
    }
}

// assignment operator
Arr& Arr::operator=(const Arr& other) 
{
    if (this != &other) 
    {
        delete[] data;

        this->size = other.size;
        this->data = new int[size];
        for (int i = 0; i < size; ++i) 
        {
            data[i] = other.data[i];
        }
    }
    return *this;
}


int Arr::getSize() const 
{
    return size;
}

void Arr::set(int index, int value) 
{
    data[index] = value;
}

void Arr::resize(int newSize) 
{
    int* newData = new int[newSize];
    int numitems;
    if (size < newSize) numitems = size;
    else numitems = newSize;
    for (int i = 0; i < numitems; ++i) 
    {
        newData[i] = data[i];
    }
    for (int i = size; i < newSize; ++i) 
    {
        newData[i] = 0;
    }

    delete[] data; 

    data = newData;
    size = newSize;
}

void Arr::print() const 
{
    for (int i = 0; i < size; ++i) 
    {
        cout << data[i] << " ";
    }
    cout << endl;
}

int main() 
{
    /*Arr array1(5);
    array1.print();

    for (size_t i = 0; i < array1.getSize(); ++i) {
        array1.set(i,int(i * 2));
    }
    array1.print();

    array1.resize(8);
    array1.print();

    // copy constructor
    Arr array2 = array1;
    array2.print();

    // assignment op
    Arr array3(8);
    array3.print();
    array3 = array1;
    array3.print();
    */

    Arr array1(5);
    for (size_t i = 0; i < array1.getSize(); ++i) {
        array1.set(i,int(i * 2));
    }
    array1.print();
    const Arr constarray = array1;

    

    // Using non-const operator[]
    array1[0] = 100;
    int x = array1[0];
    array1.print();
    cout << "x: " << x << endl;
    // Using const operator[]
    //constarray[0] = 100;
    constarray.print();
    int y = constarray[0];
    cout << "y: " << y<< endl;
    return 0;
}
