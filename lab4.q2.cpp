//Library
#include<iostream>
//using keyword or namespace
using namespace std;
//The Main function
int main(){
//Defining variables
float fahrenheit;
float celsius;

cout << "enter the temperature in celsius" ;
cin >> celsius;
fahrenheit = 1.4*celsius + 32;
cout << "The temperature in celsius: " <<  celsius << endl;
cout << "The temperature in fahrenheit: " << fahrenheit << endl;
return 0; 
}

