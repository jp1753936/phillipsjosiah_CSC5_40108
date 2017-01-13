
/* 
 * File:   main.cpp
 * Author: Josiah Phillips
 * Created on January 12, 2017, 7:39 PM
 * Purpose: Monthly Sales Tax
 */

#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main()
{
 string month;
 double year;
 double totalCollected;
 double stateTax = 0.04, countyTax = 0.02, sales;
 double stateTaxTotal, countyTaxTotal, totalTax;

 cout << "Enter Month: ";
 getline(cin, month);
 cout << "Enter Year: ";
 cin >> year;
 cout << "Enter total amount collected at cash register: $";
 cin >> totalCollected;

 sales = totalCollected/1.06;

 stateTaxTotal = sales * stateTax;
 countyTaxTotal = sales * countyTax;
 totalTax = stateTaxTotal + countyTaxTotal;

 cout << "\n-------------------------\n";
 cout << "Month: " << month << endl;
 cout << "Year:  " << year << endl;
 cout << "-------------------------\n";
 cout << setprecision(2) << fixed;
 cout << "Total collected: " << setw(10) << "$" << setw(9) << totalCollected << endl;
 cout << "Sales: " << setw(20) << "$" << setw(9) << sales << endl;
 cout << "County Sales Tax:" << setw(10) << "$" << setw(9) << countyTaxTotal << endl;
 cout << "State Sales Tax: " << setw(10) << "$" << setw(9) << stateTaxTotal << endl;
 cout << "Total Sales Tax: " << setw(10) << "$" << setw(9) << totalTax << endl << endl;


 return 0;
}

