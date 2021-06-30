#include <iostream>
using namespace std;

double fallingDistance(double);

int main()

{
	double distance, sec;
	for (sec = 1; sec <= 10; sec ++)
	{
		distance = fallingDistance(sec);
		cout << "The distance at " << sec << " seconds is " << distance  << endl;
	}
    
return 0;
}


double fallingDistance (double sec)
{
	double meters, time, graV, grav = 9.8;
	graV = (.5 * grav);
	time = sec * sec;
    meters = (graV * time);
	return meters;
}

