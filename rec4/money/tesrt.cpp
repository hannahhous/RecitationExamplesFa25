/*
Akshat Thapliyal 
section: 0001
id: at24e
*/
#include "Sphere.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std; 


const double PI = 3.14; 

int RandomNum() 
{
    //seeding the random number with the time
    static bool seedIn = false;
    //we need to use the SAME random numebr each time through one run so thats why we use the static bool function 
    if (!seedIn) 
    {
        srand((time(0)));
          seedIn = true;  
    }
    // the %8 generates random numbers from 0-7 since its 8 exclusive 
    return (rand() % 8);
}

// below is the function for the defualt sphere which is said in the instructions to have a radius of 1 and a random number assigned to it 
Sphere::Sphere() 
{
    radius = 1.0;
    int RandCol = RandomNum();
    // above we called the get RandomNum function 
    //based on the number we set each value to a char var 
    switch (RandCol) 
    {
        case 1: color = 'B'; 
          break;  
        case 2: color = 'R'; 
          break;  
        case 3: color = 'P'; 
          break;  
        case 4: color = 'Y'; 
          break;  
        case 5: color = 'G'; 
          break;  
        case 6: color = 'L'; 
          break;  
        case 7: color = 'M'; 
          break;  
    }
}

//below this function takes 2 perameters a r value for the radius and a c value for the color
Sphere::Sphere(double r, char c) 
{
    setRadius(r);

    //if the color is not valid then it assigns a random one  doing the same thing as above

    if (!validColor(c)) 
    {
        int randomColorCode = RandomNum();
        switch (randomColorCode) 
        {
            case 1: c = 'B'; 
                break;
            case 2: c = 'R'; 
                break;
            case 3: c = 'P'; 
                break;
            case 4: c = 'Y'; 
                break;
            case 5: c = 'G'; 
                break;
            case 6: c = 'L'; 
                break;
            case 7: c = 'M'; 
                break;
        }
    } 
    else // if the color is a match then we just make sure the value is uppercase with the toupper function with the char peramerter passed to it 
    {
        c = toupper(c);
    }
    color = c;
}

//Accessor Functins below 
//these are just getting the values 

double Sphere::getRadius() const 
{
return radius;
}
char Sphere::getColor() const 
{
  return color;
}
//calculation functions Accessor also


/* this was nto working with the driver file 
double Sphere::getDiameter() const
{
    int rr = radius; 
    rr = radius*2; 
    return rr; 


}
*/

double Sphere::getDiameter() const 
{
    //diameter is 2 times the radius 
    // i doint need a whole new variable for diameter since everytime i need it it can just be called and printed at radius *2
    return 2 * radius;
}

double Sphere::getSurfaceArea() const 
{
    //no cmath so no sqrt function 
    return (4 * PI) * (radius * radius);
}
double Sphere::getVolume() const {
    return (4 / 3) * PI * radius * radius * radius;
}

//mutator functions 
void Sphere::setRadius(double newRadius) 
{
    //to ensure there ae no negative radius numbers 
    if (newRadius > 0) 
    {
        radius = newRadius;

    }
}
void Sphere::setColor(char newColor) 
{
    if (validColor(newColor)) 
    {

        color = toupper(newColor);
    }
}

//set functions 
void Sphere::grow(double increment) 
{
    if (increment > 0) 
    {

        setRadius(radius + increment);
    }
}
void Sphere::shrink(double decrement) 
{
    if (decrement > 0 && radius - decrement > 0) 
    {
        setRadius(radius - decrement);
    }
}

bool Sphere::validColor(char c) const 
{
    c = toupper(c);

    if (c == 'B') 
    {
        return true;  

    } else if (c == 'R') 
    {
        return true;  
    } else if (c == 'P') 
    {
        return true; 

    } else if (c == 'Y') 
    {
        return true;  
    } else if (c == 'G') 
    {
        return true;  
    } else if (c == 'L') 
    {
        return true;  
    } else if (c == 'M') 
    {
        return true;  
    }

    return false;  
}

string Sphere::getColorName() const 
{
    //we are just matching the set letters to actual words for printing purposes 
    switch (color) 
    {
        case 'B': return "Blue";

        case 'R': return "Red";

        case 'P': return "Purple";

        case 'Y': return "Yellow";


        case 'G': return "Green";

        case 'L': return "Black";

        case 'M': return "Maroon";

        default: return "Unknown";

    }
}

//as per the instructions the printsummary takes one perameter in int precision 

void Sphere::printSummary(int precision) const 
{
    //"larger than 5 or smaller than 1" - directions 

  if (precision < 1 || precision > 5) 
  {
      precision = 2;
  }
  cout << fixed << setprecision(precision);

      cout << " Radius: " << radius << endl;


      cout << " Color: " << getColorName() << endl;

      cout << " Diameter: " << getDiameter() << endl;

      cout << " Volume: " << getVolume() << endl;

      cout << " Surface Area: " << getSurfaceArea() << endl;

  }