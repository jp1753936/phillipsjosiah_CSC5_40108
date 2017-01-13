
 /* 
  File:   main.cpp
  Author: Josiah Phillips
  Created on January 12, 2017, 9:51 PM
  Purpose:  How Much Insurance?
 */

#include<iostream>
using namespace std;

int main()
{
 double replacementCost;

 cout << "******************************\n"
 << "Minimum insurance recommended \n"
 << "******************************\n";

 cout << "Enter the replacement cost of your building: ";
 cin >> replacementCost;

 cout << "The Minimum insurance you should buy is: $" << replacementCost * 0.80 << endl << endl;

 return 0;
}

