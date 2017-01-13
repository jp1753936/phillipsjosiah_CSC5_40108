/* 
  File:   main.cpp
  Author: Josiah Phillips
  Created on January 11, 2017, 8:10 PM
  Purpose:  Miles Per Gallon
 */

#include<iostream>

using namespace std;

int main()
{
 double capacity, miles, average;

 cout << "Enter the number of size of the tank (gallons): ";
 cin >> capacity;
 cout << "Enter the number of miles per tank of gas: ";
 cin >> miles;
 
 average = miles/capacity;

 cout << "The car's MPG is: " << average << endl << endl;

 system("pause");

 return 0;
}

