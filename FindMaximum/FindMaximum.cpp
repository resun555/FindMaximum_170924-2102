// FindMaximum.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#pragma warning ( disable : 4996 )
#include <stdio.h>


int main()
{
	double number;
	double maximum = 0;
	for (size_t i = 0; i < 10; i++)
	{
		scanf("%lf", &number);
		if (maximum < number || i == 0)
		{
			maximum = number;
		}
	}
	printf("%.0lf", maximum);
    return 0;
}

