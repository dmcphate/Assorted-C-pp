// Dustin McPhate
// Comp 1060
// Program 4.16

# include <iostream>
using namespace std;

int main ()
{
	double totalCal, fatGram, fatCal, percentFat;
	
	cout << "Enter the total calories in your food:";
	cin >> totalCal;
	if (totalCal <= 0)
	{	 
		cout << "You have entered an invalid value.";
	}
	else 
	{
		cout << "Enter the total grams of fat in your food:";
		cin >> fatGram;
		if (fatGram <= 0)
		{ 
			cout << "You have entered an invalid value.";
		}
		else 
		{
			fatCal = fatGram * 9;
			if (fatCal > totalCal)
			{
				cout << "You have entered an invalid value.";
			}
			else
			{
				percentFat = (fatCal / totalCal) * 100;
				cout <<"Your food is " << percentFat << " percent fat.\n";
				if (percentFat < 30)
				{
					cout << "This food is low in fat.";
				}
			}
		}
	}
	return 0;
}	 	 

