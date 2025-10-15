#include <iostream>
using namespace std;

class Arr {
private:
    int* data;
    int size;
public:
    Arr(int s);
    ~Arr();
    int getSize() const;
    void set(int index, int value);
    void resize(int newSize);
    void print() const;
};

Arr::Arr(int s)
    {
        size = s;
        data = new int[size];
        for (int i = 0; i < size; ++i) {
            data[i] = 0;
        }
    }

Arr::~Arr() {
        delete[] data;
    }

int Arr::getSize() const {
        return size;
    }

void Arr::set(int index, int value) {
        data[index] = value;
    }

void Arr::resize(int newSize) {
        int* newData = new int[newSize];
        int numitems;
        if (size < newSize) numitems = size;
        else numitems = newSize;
        for (int i = 0; i < numitems; ++i) {
            newData[i] = data[i];
        }

        for (int i = size; i < newSize; ++i) {
            newData[i] = 0;
        }

        delete[] data; 

        data = newData;
        size = newSize;
    }


void Arr::print() const {
        for (int i = 0; i < size; ++i) {
            cout << data[i] << " ";
        }
        cout << endl;
    }

int main() {
    Arr arr(5);

    for (int i = 0; i < arr.getSize(); ++i) {
        arr.set(i, i+1);
    }

    cout << "Original array: ";
    arr.print();

    arr.resize(10);

    cout << "Resized array: ";
    arr.print();

    return 0;
}
