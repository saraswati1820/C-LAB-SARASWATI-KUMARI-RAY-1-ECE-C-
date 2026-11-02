#include <stdio.h>
int main()
{
	int units;
	float bills;
	printf("====ELECTRICITY BILL====");
	printf("Enter the units consumed;");
	scanf("%d",&units);
	if(units<=100)
	{
		bills=units*1.50;
	}
	else if(units<=200)
	{
		bills=100*1.50+(units-100)*2.00;
	}
	else if(units<=500)
	{
		bills=100*1.50+100*2.00+(units-100)*3.00;
	}
	else
	{
		bills=100*1.50+100*2.00+300*3.00+(units-500)*5.00;
	}
	printf("Electricity bill=%.2f",bills);
	return 0;
}