/*

  Course Pack 3 - Loopings
  Exercise 2. Marco is 1.50m and grows 2cm per year, while Junior is 1.10m and grows 3cm per year.
  year. Write a program that calculates and display how many years it will take Junior to be taller than Marco.

*/

#include <stdio.h>

int main()
{
	float marco=1.5, junior=1.1;
	int i;
	for(i=0; junior<marco; i++)
    {
		marco = marco + 0.02;
		junior = junior + 0.03;	
    }
	printf("In %d year(s)", i);
	return 0;
}