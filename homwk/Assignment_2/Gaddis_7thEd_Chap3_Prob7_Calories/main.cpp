/* 
  File:   main.cpp
  Author: Josiah Phillips
  Created on January 12, 2017, 9:51 PM
  Purpose:  How Many Calories?
 */

#include<iostream>
using namespace std;

int main()
{
 double cookies, totalCalories;

 cout << "Enter the number of cookies you ate: ";
 cin >> cookies;

 /*
 For reference:
 40 cookies in a bag = 10 servings
 4 cookies = 1 serving = 300 calories
 2 cookies = 1/2 serving = 150 calories
 1 cookie = 1/4 serving = 75 calories
 So, 1 cookie = 75 calories
 */

 totalCalories = cookies * 75;

 cout << "\n\n**********************\n";
 cout << "You consumed: " << totalCalories << " calories! \n\n";


 return 0;
}
