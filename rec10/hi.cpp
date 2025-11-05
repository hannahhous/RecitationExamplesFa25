//Fill in this class

class IntArray {
private:
    int* data;
    int size;

    // resize array function
    void resizeArray(int newSize)
      {
      int* temp = new int[newSize];
      for (int i=0;i<size;i++)
        temp[i] = data[i];
      for (int i=size;i < newSize;i++)
        temp[i] = 0;
      size = newSize;
      delete[] data;
      data = temp;
      }

public:
    // Constructor: allocate array of given size
    IntArray(int s)
    {
      size = s;
      data = new int[size];
      for (int i=0;i<size;i++)
        data[i] = 0;
     }

    // Destructor: clean up memory
    ~IntArray()
    {
      delete[] data;
      }

    // Copy constructor: deep copy
    IntArray(const IntArray& other)
    {
      size = other.size;
      data = new int[size];
      for (int i=0;i<size;i++)
        data[i] = other.data[i];
      }

    // Assignment operator: deep copy with self-assignment check
    IntArray& operator=(const IntArray& other)
    {
      if (this != &other)
        {
        // do assignemnt operator
        delete[] data;
        size = other.size;
        data = new int[size];
          for (int i=0;i<size;i++)
              data[i] = other.data[i];

        }
       return *this;
    }

};
















/*

// Solution:
class IntArray {
private:
    int* data;
    int size;

    void resizeArray(int newSize)
    {
        int* temp = new int[newSize];

        // Copy existing data
        int copySize = (size < newSize) ? size : newSize;
        for(int i = 0; i < copySize; i++) {
            temp[i] = data[i];
        }

        // Initialize new elements if array grew
        for(int i = size; i < newSize; i++) {
            temp[i] = 0;
        }

        delete[] data;
        data = temp;
        size = newSize;
    }
public:
    IntArray(int s) : size(s) {
        data = new int[size];
        for(int i = 0; i < size; i++) {
            data[i] = 0;
        }
    }

    ~IntArray() {
        delete[] data;
    }

    IntArray(const IntArray& other) : size(other.size) {
        data = new int[size];
        for(int i = 0; i < size; i++) {
            data[i] = other.data[i];
        }
    }

    IntArray& operator=(const IntArray& other) {
        if(this != &other) {
            delete[] data;
            size = other.size;
            data = new int[size];
            for(int i = 0; i < size; i++) {
                data[i] = other.data[i];
            }
        }
        return *this;
    }

    int& operator[](int index) {
        return data[index];
    }
};


*/
// Create a base class Animal with:
// - protected string name
// - virtual function speak() that prints "Some sound"

// Create a derived class Dog that:
// - Overrides speak() to print "Woof!"
// - Has a constructor taking a name parameter

// YOUR CODE HERE

class Animal
    {
  protected:
        string name;
  public:
        Animal(string n="")
        {
          name = n;
        }
        virtual void speak()
        {
          cout << "some sound";
          }
  };

  class Dog : public Animal
  {
    public:
          Dog(string n) : Animal(n){}
          void speak()
          {
            cout << "woof";
           }
  };

  Dog d;
  d.speak()

      //woof