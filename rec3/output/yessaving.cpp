#include <iostream>
#include <iomanip>
using namespace std;

void PoliteFunction();
void PrintBalances(const double* list, const int size);

const int SIZE = 5;

int main()
{

   cout << "Hi, I'm the main program, and I'm setting my "
        << "\nnumeric outputs to be right-justified, fixed decimal "
        << "\npoint output, and to 2 places after the decimal. I'm"
        << "\nalso using the default fill character (the space)\n\n";
   cout << right << fixed << setprecision(2);

   double balances[SIZE] = { 23.45, 134.56, 987.3546, 33.0, 15483.977 };
   PrintBalances(balances, SIZE);

   PoliteFunction();

   cout << "Hi, I'm the main program again.  I haven't made any "
        << "\nformatting changes, so I'll print my balances again\n\n";
   PrintBalances(balances, SIZE);

   cout << "\nWow! You were definitely a polite function!  You "
        << "\nput all the format settings for cout back the way you "
        << "\nfound them, after doing your printouts."
        << "\nI am a happy main()!  :-D :-D :-D \n\n";



}


void PoliteFunction()
// does some formatting changes, does NOT reset stream flags
{
   cout << "\nHi, I'm a function, and I'm doing MY outputs using"
        << "\nleft justification, scientific notation, and a "
        << "\ndecimal precision of 3.  I'm also changing the fill"
        << "\ncharacter to 'z' for a few outputs\n\n";

   // capture current settings
   ios_base::fmtflags fstate = cout.flags();
   char oldfill = cout.fill();
   int oldprecision = cout.precision();

   cout << left << scientific << setprecision(3);

   double x = 12345.6789, y = 9874586.3456;
   cout << setw(20) << x << setw(20) << y << "***\n";
   cout << setw(15) << x << setw(15) << y << "***\n";

   cout << setfill('z');
   cout << setw(20) << x << setw(20) << y << "***\n";
   cout << setw(15) << x << setw(15) << y << "***\n\n";

   // RESTORE settings to what they were when this function started
   cout.flags(fstate);
   cout.fill(oldfill);
   cout.precision(oldprecision);
}

void PrintBalances(const double* list, const int size)
{
   cout << '\n';
   for (int i = 0; i < size; i++)
   {
      cout << "Account " << i+1 << " balance =  $ ";
      cout << right << setw(20) << list[i]  << '\n';
   }
   cout << '\n';
}