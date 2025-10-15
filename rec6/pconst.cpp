int main()
    {
// Non-constant pointer to non-constant data
int * ptr;
// Can change:
*ptr = 10;        // ✓ Can modify data
ptr = nullptr;    // ✓ Can change pointer




// Non-constant pointer to CONSTANT data
const int * ptr1;
// Cannot change data, can change pointer:
*ptr1 = 10;        // Illegal - data is protected
ptr1 = nullptr;    // Allowed - pointer can move




int var = 5;
// CONSTANT pointer to non-constant data
int * const ptr2 = &var;    // Must initialize here!
// Can change data, cannot change pointer:
*ptr2 = 10;        // Allowed - data can change
ptr2 = nullptr;    // Illegal - pointer is fixed




//CONSTANT pointer to CONSTANT data
const int * const ptr3 = &var;
// Cannot change anything:
*ptr3 = 10;        // Illegal
ptr3 = nullptr;    // Illegal

return -0;
}
