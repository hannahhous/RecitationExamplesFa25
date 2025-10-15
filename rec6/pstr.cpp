/*
//-----------------------------------------------------------
// const without pointer
// will compile but error

#include <iostream>
using namespace std;

int main()
{
    char name[20] = "Marvin Dipwart";
    char * greeting = "Hello";		// points to a constant segment
    //  of memory

    cout << "name = " << name << '\n';
    cout << "greeting = " << greeting << '\n';

    name[1] = 'e';
    cout << "name = " << name << '\n';

    greeting[1] = 'u';

    return 0;
}

*/


//-----------------------------------------------------
// const with pointer
// will not compile

#include <iostream>
using namespace std;

int main()
{
    char name[20] = "Marvin Dipwart";
    const char * greeting = "Hello";	// const guarantees that the
    //  compiler will not allow attempt
    //  to change target
    cout << "name = " << name << '\n';
    cout << "greeting = " << greeting << '\n';

    name[1] = 'e';
    cout << "name = " << name << '\n';


    greeting[1] = 'u';

    return 0;
}
