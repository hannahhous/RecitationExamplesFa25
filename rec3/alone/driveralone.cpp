// driveralone.cpp
// Test the Add and Equals functions

#include <iostream>		// for cout
#include "fracalone.h"		// for Fraction declarations

using namespace std;

bool Equals(Fraction x, Fraction y)
{
   return (x.GetNumerator() * y.GetDenominator() == y.GetNumerator() * x.GetDenominator());
}

Fraction Add(Fraction x, Fraction y)
{
   int num = x.GetNumerator()*y.GetDenominator() + y.GetNumerator()*x.GetDenominator();
   int denom = x.GetDenominator() * y.GetDenominator();

   Fraction answer(num, denom);		// create the answer Fraction
   return answer;

   // could also do this, instead of the above two lines:
   //
   // return Fraction(num, denom);	// construct fraction and return
}

Fraction Multiply(Fraction x, Fraction y)
{
  int num = x.GetNumerator() * y.GetNumerator();
  int denom = x.GetDenominator()*y.GetDenominator();
  Fraction answer(num, denom);
  return answer;
}




int main()
{
   Fraction f1, f2, f3, f4;
   const Fraction fc(2);
   cout << "Enter fraction f1: ";
   f1.Input();
   cout << "Enter fraction f2: ";
   f2.Input();
   
   cout << "\nf1 = ";
   f1.Show();
   cout << "\nf2 = ";
   f2.Show();
   fc.Show();
   //fc.
   cout << "\n\n";

   if (Equals(f1, f2))
	cout << "f1 and f2 are equal\n";
   else
	cout << "f1 and f2 are NOT equal\n";

   f3 = Add(f1, f2);
   cout << "f1 + f2 = ";
   f3.Show();
   cout << '\n';

   f4 = Multiply(f1,f2);
f4.Show();
   return 0;
}