

#include <iostream>
#include <fstream >
using namespace std;

int main ()
{
ifstream inputFile;
inputFile.open ("input.txt");
int input1, input2, input3, input4, input5, sum;
sum  = input1 + input2 + input3 + input4 +input5;
cout << "The numbers are " << input1 << endl; 
cout << input2 << endl;
cout << input3 << endl;
cout << input4 << endl;
cout << input5 << endl;
cout << "Their sum is " << sum; 
return 0;
}  

