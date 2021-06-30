

# include <iostream>
using namespace std;

int main ()
{
	double num1, num2, num3;
	char decision;
	do 
	{
	cout <<"Enter two numbers for me to add.";
	cin >> num1 >> num2;
	num3 = num1 + num2;
	cout << "The new number is " << num3 << "\n";
	cout << "Do you still want to do this?";
	cin  >> decision;
	}
	while (decision == 'Y' || decision == 'y');
	return 0;
}

