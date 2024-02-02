#include<stdio.h>
#include"H 1.cpp"
#include"H 2.cpp"
#include"H 3.cpp"
#include"H 4.cpp"
#include"H 7.cpp"
#include"H 8.cpp"
#include"H 9.cpp"
#include"H 10.cpp"
#include"H 11.cpp"
#include"H 12.cpp"
void HARD(int n)
{
	int t, select;
	int c;
	char* result;
	do{
		printf("------------------------------------------------MEDIUM----------------------------------------------------------- \n");
		printf("+                                                                                                               +\n");
		printf("+  1.Write a function to sort an array of numbers in ascending or descending order                              +\n");
		printf("+  2.Write a function that joins 2 arrays of numbers together.add,subtract multiply,divide                      +\n");
		printf("+  7.Write a function to get a number of elements from an array of numbers based on the beginning and the end   +\n");
		printf("+  8.Write a function to find the position of a string in another string                                        +\n");
		printf("+  9.Write a function to find the total number of elements of string a in string b                              +\n");
		printf("+  10.Write a function random(a) which uses the function random() to return a random value between 0 and a      +\n");
		printf("+  11.Law on calculating the price of motels in Hanoi                                                           +\n");
		printf("+  12.Law on personal income tax calculation in Vietnam                                                         +\n");
		printf("+  13.Write a function for the sum of the digits of an integer                                                  +\n");
		printf("+  11.Write a function to cut a string by starting position and ending position                                 +\n");
		printf("+   0. back                                                                                                     +\n");
		printf("------------------------------------------------------------------------------------------------------------------\n");
		printf("input :"); 
		scanf("%d",&select);
		switch(select)
		{
			case 1:
				Reverse1(t);
				break;
			case 2:
				Random1(t);
				break;
			case 3:
				Connectingincrements(t);
				break;
			case 4:
				Connectingdescendinggills(t);
				break;
			case 5:
				switchto(t);
				convertmoneytowords(c,result);
				break;
			case 6:
				Exchange(t);
				break;
			case 7:
				Chain(t);
				break;
			case 8:
				Mix(t);
				break;
			case 9:
				Factorialcalculation(n);
				FactorialCalculation(n);
				break;
			case 10:
				Countfactorial(t);
				break;
			case 0:
				break;
		}
	}while(n != 0);
}
