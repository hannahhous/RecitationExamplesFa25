#include <iostream>
#include "destructor.h"

using namespace std;

void Func();

int main()
{
  cout << "** Declaring object A **\n";

  Thing A;

  A = Thing(16);		// what does this do?

  {
    cout << "** Declaring object B (in new block) **\n";
    Thing B(6);

    cout << "** Calling function Func() **\n";
    Func();
    cout << "** We have returned from function Func() **\n";

    cout << "** Leaving local block **\n";
  }

  {
    cout << "** Declaring object C (in new block) **\n";
    Thing C(10);
    cout << "** Leaving local block **\n";
  }

  return 0;
}

void Func()
{
  cout << "** Creating object Z (local variable in function) ** \n";

  Thing Z(25);

  

}