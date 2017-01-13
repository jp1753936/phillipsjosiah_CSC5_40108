/* 
  File:   main.cpp
  Author: Josiah Phillips
  Created on January 11, 2017, 8:10 PM
  Purpose:  Celsius to Fahrenheit
 */

#include<iostream>

using namespace std;

int main()
{
 double Celsius, conversion;

 cout << "Enter Celsius temperature: ";
 cin >> Celsius;

 conversion = (1.8 * Celsius) + 32;

 cout << Celsius << " Celsius = " << conversion << " Fahrenheit \n\n";


 return 0;
}
