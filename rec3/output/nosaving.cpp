#include <iostream>
#include <iomanip>
using namespace std;

void InconsiderateFunction();
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

   InconsiderateFunction();

   cout << "Hi, I'm the main program again.  I haven't made any "
        << "\nformatting changes, so I'll print my balances again\n\n";

   PrintBalances(balances, SIZE);

   cout << "Oooh...  You're a bad, inconsiderate function!  You "
        << "\nmessed up all my format settings for cout without "
        << "\ntelling me, and now my output doesn't look right! "
        << "\nI'm a very unhappy main program... :-( :-( :-( \n\n";
}

void InconsiderateFunction()
// does some formatting changes, does NOT reset stream flags
{
   cout << "\nHi, I'm a function, and I'm doing MY outputs using"
        << "\nleft justification, scientific notation, and a "
        << "\ndecimal precision of 3.  I'm also changing the fill"
        << "\ncharacter to 'z' for a few outputs\n\n";

   cout << left << scientific << setprecision(3);

   double x = 12345.6789, y = 9874586.3456;
   cout << setw(20) << x << setw(20) << y << "***\n";
   cout << setw(15) << x << setw(15) << y << "***\n";

   cout << setfill('z');
   cout << setw(20) << x << setw(20) << y << "***\n";
   cout << setw(15) << x << setw(15) << y << "***\n\n";
}

void PrintBalances(const double* list, const int size)
{
   cout << '\n';
   for (int i = 0; i < size; i++)
   {
      cout << "Account " << i+1 << " balance =  $ ";
      cout << setw(20) << list[i] << '\n';
   }
   cout << '\n';
}