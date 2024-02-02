#include<stdio.h>
#include"1.cpp"
#include"2.cpp"
#include"3.cpp"
#include"4,5,6,7.cpp"
#include"8.cpp"
#include"9.cpp"
#include"10,11,12.cpp"
#include"13.cpp"
#include"14.cpp"
#include"15.cpp"

void EASY(int n)
{
	int select,t;
	int a[100];
	do{
		printf("+++++++++++++++++++++++++++++++++++++++++++++++MENU+++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		printf("++                                             EASY                                                     ++\n");
	        printf("++                                                                                                      ++\n");
		printf("++    1. Swap the value of 3 numbers a,b,c with each other                                              ++\n");
		printf("++    2. Write a function to calculate a to the power b                                                 ++\n");
		printf("++    3. Check the parity uniformity of two numbers                                                     ++\n");
		printf("++    4. Count the number of even and odd numbers and sum the even and odd numbers in the array         ++\n");
		printf("++    5. Write a function to check if a number is prime ?                                               ++\n");
		printf("++    6. Write a function to find remainder of a divided by b (do not use %)                             ++\n");
		printf("++    7. Find the maximum and minimum values, and average the numbers of the array                      ++\n");
		printf("++    8. Write a reverse order function                                                                 ++\n");
		printf("++    9. Find the position of a number in an array of numbers                                           ++\n");
		printf("++   10. Write a function to calculate n factorial                                                      ++\n");
		printf("++    0. back                                                                                           ++\n");
		printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		printf("input :");
		scanf("%d",&select);
		switch(select)
	{
	    case 1:
	     	Swap(t);
	     	break;
	    case 2:
	     	Logarithmically(t);
	     	break;
		case 3:
			Parity2numbers(t);
			break;
		case 4:
			Oddcount(t);
			break;	
		case 5:
			Checkoriginal(t);
			break;
		case 6:
			Surplus(t);
			break;
		case 7:
			Smallestlargestvalue(t);
			break;
		case 8:
			Reverse(t);
			break;
		case 9:
			Findlocation(t);
			break;
		case 10:
			Factorial(t);
			break;
		case 11:
			break;
	}
	}while(n != 0);
}

