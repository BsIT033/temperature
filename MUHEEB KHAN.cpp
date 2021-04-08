#include<stdio.h>
int main ()
{
	float temparray[21], sum=0,average;
	int i;
	for(i=0; i<21; i++)
	{
		printf("Enter temperature reading of day:%d=",i+1);
		scanf("%f", &temparray[i]);
		sum = sum + temparray[i];
	}
	average = sum / 21.0;
	printf("the average temperature of 3 weeks is = %.2f",average);
	return 0;
}
