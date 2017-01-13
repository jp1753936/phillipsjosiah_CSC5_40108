
/* 
 * File:   main.cpp
 * Author: Josiah Phillips
 * Created on January 12, 2017, 7:39 PM
 * Purpose: Test Average
 */

#include <iostream>
using namespace std;

int main()
{
float f_tScoreOne, f_tScoreTwo, f_tScoreThree, f_tScoreFour, f_tScoreFive, f_avTestScore;
cout<<"First test score: \n";
cin>>f_tScoreOne;
cout<<"Second test score: \n";
cin>>f_tScoreTwo;
cout<<"Third test score: \n";
cin>>f_tScoreThree;
cout<<"Fourth test score: \n";
cin>>f_tScoreFour;
cout<<"Fifth test score: \n";
cin>>f_tScoreFive;

f_avTestScore = (f_tScoreOne + f_tScoreTwo + f_tScoreThree + f_tScoreFour + f_tScoreFive)/5;

cout<<"Average test score: "<< f_avTestScore <<"!\n";

}