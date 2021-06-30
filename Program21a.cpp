//CSC 1060 Spring 2011
//Program # 21a Pg 155
//Dustin McPhate

#include <iostream>
#include <fstream >
using namespace std;

int main ()
{
ofstream outputFile;
outputFile.open ("input.txt");
double input1, input2, input3, input4, input5;
cout << "Enter a number.";
cin >> input1; 
cout << "Now enter another.";
cin >> input2; 
cout << "Now another.";
cin >> input3; 
cout << "Now another.";
cin >> input4; 
cout << "Now enter one last number.";
cin >> input5;
outputFile << input1;
outputFile << input2;
outputFile << input3;
outputFile << input4;
outputFile << input5;
outputFile.close();
return 0;
}  

