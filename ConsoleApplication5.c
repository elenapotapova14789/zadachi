// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>


int main()
{
	int x;
	int y;
	int z;
	printf("vvedite x");
	scanf_s("%d",&x);
	printf("vvedite y");
	scanf_s("%d", &y);
	printf("vvedite z");
	scanf_s("%d", &z);
	if (((x*x) + (y*y)) == (z*z))
		printf("da");
	else
		printf("net");
	system("pause");
    return 0;
}

