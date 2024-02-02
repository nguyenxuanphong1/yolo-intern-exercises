#include<stdio.h>
#include"M 1.cpp"
#include"M 2.cpp"
#include"M 3.cpp"
#include"M 4.cpp"
#include"M 5.cpp"
#include"M 6.cpp"
#include"M 7.cpp"
#include"M 8.cpp"
#include"M 9.cpp"
#include"M 10.cpp"
#include"M 11.cpp"
#include"M 12.cpp"
#include"M 13.cpp"
#include"M 14.cpp"
#include"M 15.cpp"
#include"M 16.cpp"
#include"M 17.cpp"
#include"M 18.cpp"
void MEDIUM(int n)
{
	int t,select;
	do{
		printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		printf("++             1. Sort an array of numbers in ascending and descending order                             ++\n");
		printf("++             2. Write a function that joins two arrays together                                        ++\n");
		printf("++             3. Write a function that adds 2 arrays of numbers                                         ++\n");
		printf("++             4. Write a function to subtract 2 arrays of numbers                                       ++\n");
		printf("++             5. Write a function to multiply 2 arrays of numbers                                       ++\n");
		printf("++             6. Write a function to divide 2 arrays of numbers                                         ++\n");
		printf("++             7. Get some elements of an array based on the beginning and end positions                 ++\n");
		printf("++             8. Write a function to find the position of a string in another string                    ++\n");
		printf("++             9. Find the total number of elements of string a in string b                              ++\n");
		printf("++             10. Find the total number of elements of the string a that are not in the string b        ++\n");
		printf("++             11. Let the random() function return a value from 0 den a                                 ++\n");
		printf("++             12. Let the random() function return a value from a den -a                                ++\n");
		printf("++             13. Calculate the amount to be paid when renting a room at the motel                      ++\n");
		printf("++             14. Calculate the total amount of tax payable based on income and n months                ++\n");
		printf("++             15. Calculate the total number of digits of an integer                                    ++\n");
		printf("++             16. Print the first n numbers in the fibonacci sequence                                   ++\n");
		printf("++             17. Cut a string by start position and end position                                       ++\n");
		printf("++             18. Cut the string by the starting position and the number of characters to cut           ++\n");
		printf("++              0. back                                                                                  ++\n");
		printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		printf("input :");
		scanf("%d",&select);
		switch(select)
		{
			case 1:
				Arrange(t);
				break;
			case 2:
				Arrayconcatenation(t);
				break;
			case 3:
				Sum(t);
				break;
			case 4:
				Difference(t);
				break;
			case 5:
				Multiplication(t);
				break;
			case 6:
				Division(t);
				break;
			case 7:
				Take(t);
				break;
			case 8:
				Find(t);
				break;
			case 9:
				Array(t);
				break;
			case 10:
				Notinarray(t);
				break;
			case 11:
				Random11(t);
				break;
			case 12:
				Random12(t);
				break;
			case 13:
				Motelprices(t);
				break;
			case 14:
				Incometax(t);
				break;
			case 15:
				Sumofdigits(t);
				break;
			case 16:
				Fibonaccichain(t);
				break;
			case 17:
				Cut(t);
				break;
			case 18:
				Cutstring(t);
				break;
			case 0:
				break;
		}
	}while(n != 0);
}
