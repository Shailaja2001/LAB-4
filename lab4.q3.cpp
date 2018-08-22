//Library
#include<iostream>
//keyword or namespace
using namespace std;
//Main function
int main(){
//defining variables
float fahrenheit;
float celsius;

cout << "Enter the temperature in fahrenheit";
cin >> fahrenheit;
celsius = (fahrenheit-32)*5/9;
cout << "The temperature in celsius: " << celsius << endl;
return 0;
}
