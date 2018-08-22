//Library
#include<iostream>
//using keyword or namespace
using namespace std;
//Main function
int main(){
//Defining variables
float centimeter;
float meter;
float kilometer;

cout << "Enter the length in centimeter";
cin >> centimeter;
meter = .01*centimeter;
kilometer = .00001*centimeter;
cout << "The length in meter=" << meter << endl;
cout << "The length in kilometer=" << kilometer << endl;
return 0;
}
