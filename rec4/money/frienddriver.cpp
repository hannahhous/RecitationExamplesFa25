#include "moneyfriend.h"
int main( )
{
    Money yourAmount, myAmount(10, 9);
    cout << "Enter an amount of money: ";
    yourAmount.input( );

    cout << "Your amount is "; 
    yourAmount.output( ); 
    cout << endl;
    cout << "My amount is "; 
    myAmount.output( ); 
    cout << endl;

    if (yourAmount == myAmount)
        cout << "We have the same amounts.\n";
    else
        cout << "One of us is richer.\n";

    Money ourAmount = yourAmount + myAmount;
    Money newAmount = 1 + 2;

    yourAmount.output( ); cout << " + "; myAmount.output( ); 
    cout << " equals "; ourAmount.output( ); cout << endl;

    Money diffAmount = yourAmount - myAmount;
    yourAmount.output( ); cout << " - "; myAmount.output( ); 
    cout << " equals "; diffAmount.output( ); cout << endl;

    Money prodAmount = yourAmount *6;    // 7.20
    prodAmount.output();                //7.20
    cout << "pre: "; (++prodAmount).output(); cout << endl;    //8.20
    prodAmount.output();    //8.20
    cout << "post: "; prodAmount++.output(); cout << endl;        //8.20
    prodAmount.output();    //9.20

    return 0;
}
