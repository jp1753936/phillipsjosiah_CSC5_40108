/* 
  File:   main.cpp
  Author: Josiah Phillips
  Created on January 11, 2017, 8:10 PM
  Purpose:  Miles per Gallon
 */

#include <iostream>
using namespace std;

int main()
{
    int galGas, miFulTnk, cal;
    double average;

    cout << "Please enter the number of gallons of gas your car can hold: ";
    cin >> galGas;
    cout << "Please enter the number of miles your car can be driven on a full tank: ";
    cin >> miFulTnk;


    cal = miFulTnk / galGas;

    cout << "\nThe number of miles per gallon your car gets: " << cal << "." << endl << endl;



    return 0;
}

