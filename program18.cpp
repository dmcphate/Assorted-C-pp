#include <iostream>
#include <cmath>
using namespace std;
const double pi = 3.14, areaSlice = 14.125;
int main ()
{
double diameter, radius, area, slices;
cout <<"Enter the diameter of the pizza.";
cin >> diameter;
radius = diameter / 2;
area = pi * radius * radius;
slices = area / areaSlice;
cout  << "The number of slices of pizza will be " << slices << endl;
return 0;
}  

