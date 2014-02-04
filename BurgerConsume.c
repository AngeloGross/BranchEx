/*v1.0 requirements: This is the original master file.
 * It shall consist of two functions as given below
 * and the main function.
 * The FirstSim programmer must program the "addup()" 
 * function while the SecondSim programmer must
 * program the "divide()" function.*/

#include <stdio.h>

/*This function shall add up the total Burgers of the three
 * programmer Team member consumed during the last week and
 * return this value.*/
int addup(int iConsumeOne,int iConsumeTwo,int iConsumeThree)
{
	int iTotalConsume = iConsumeOne + iConsumeTwo + iConsumeThree;
	return iTotalConsume;
}

/*This function shall calculate the last week average consume
 * of the programmer*/
float divide(int iTotalBurgers,int iAmountOfPersons)
{
	float fAverage = (float)iTotalBurgers/iAmountOfPersons;
	//this must return a floating point.
	return fAverage;
}

/*v1.1 requirements: IMPORTANT For our second version we want 3 decimal points for our output.
 * and we also want to have printed the daily burger average!*/
int main(void)
{
	int iTotalBurgers = addup(3,7,12);
	printf("The average of Burgers consumed by each team member was %.3f\n",divide(iTotalBurgers,3));
	printf("The daily average is %.3f\n",divide(iTotalBurgers,3)/7.0);
	return 0;
}
