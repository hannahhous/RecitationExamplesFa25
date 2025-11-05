#include <iostream>
#include <cstring>

class BuggyClass {
private:
    char* name;
    int* data;
    int id;

public:
    BuggyClass(const char* n, int value) {
        // Allocate memory for name and data
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        data = new int(value);
        id = value;

        std::cout << "Constructor: Created object '" << name
                  << "' with id=" << id
                  << ", data at address " << data << "\n";
    }

    // no copy constructor
    BuggyClass(const BuggyClass& other)
    {
          name = new char[strlen(other.name) +1];
          strcpy(name, other.name);

          data = new int(*other.data);

          id = other.id;

        std::cout << "Copy Constructor: Created object '" << name
               << "' with id=" << id
               << ", data at address " << data << "\n";


    }


    ~BuggyClass() {
        std::cout << "Destructor: Deleting object with id=" << id
                  << ", trying to delete data at " << data
                  << " and name at " << (void*)name << "\n";

        delete data;
        delete[] name;

        std::cout << "  Successfully deleted memory for id=" << id << "\n";
    }

    void print() {
        std::cout << "Object: name='" << name << "', id=" << id
                  << ", value=" << *data << ", data address=" << data << "\n";
    }

    void modify(int newValue) {
        *data = newValue;
        std::cout << "Modified data to " << *data << "\n";
    }
};

int main() {
    std::cout << "====== DEMONSTRATION OF DOUBLE DELETE PROBLEM ======\n\n";

    std::cout << "Creating obj1:\n";
    BuggyClass obj1("First", 100);
    obj1.print();

    std::cout << "\nCreating obj2 as a copy of obj1 (SHALLOW COPY):\n";
    BuggyClass obj2 = obj1;  // SHALLOW COPY - both objects point to same memory!
    obj2.print();

    std::cout << "\nNOTICE: Both objects have the SAME data address!\n";
    std::cout << "This means both objects point to the same memory.\n";

    std::cout << "\nModifying through obj2:\n";
    obj2.modify(999);
    std::cout << "\nSo obj2 now looks like:\n";
    obj2.print();

    std::cout << "\nLook at obj1 now (it changed too!):\n";
    obj1.print();

    std::cout << "\n====== ENTERING DESTRUCTION PHASE ======\n";
    std::cout << "When the scope ends, both objects will try to delete the same memory.\n";
    std::cout << "This causes a DOUBLE DELETE error!\n\n";

    // Destructor will be called automatically when main() ends
    // First obj2 will be destroyed (last created, first destroyed)
    // Then obj1 will be destroyed - trying to delete already-freed memory!

    return 0;
}

// To compile and run:
// g++ -o double_delete double_delete.cpp
// ./double_delete
//
// On most systems, you'll see:
// 1. The successful first destructor call
// 2. The second destructor attempting to delete the same addresses
// 3. Then either:
//    - "free(): double free detected" (Linux/glibc)
//    - "a.out(12345,0x7fff12345678) malloc: *** error: pointer being freed was not allocated" (macOS)
//    - Segmentation fault
//    - Or the program might appear to work (undefined behavior)
//
// To make the error more visible, compile with:
// g++ -g -fsanitize=address -o double_delete double_delete.cpp
// This will give you a detailed error report showing exactly where the double free occurred