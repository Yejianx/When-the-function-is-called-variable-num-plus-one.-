#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>



void ADD(int* p);

int main()
{ 
	int num = 0;



	while (num < 10)
	{
		printf("%d ", num);
		ADD(&num);
     }
	

	return 0;
}

void ADD(int* p)
{
	*p += 1;
}

