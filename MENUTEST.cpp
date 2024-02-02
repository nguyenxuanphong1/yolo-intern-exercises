#include<stdio.h>
#include"..\MENUEASY\MenuEASY.cpp"
#include"..\MENUMEDIUM\MenuMEDIUM.cpp"
#include"..\MENUHARD\MenuHARD.cpp"

int main()
{
	  int select,n;
	do{
	printf("++++++++++++++++MENU++++++++++++++++\n");
	printf("++                                ++\n");
	printf("++             1. EASY            ++\n");
	printf("++             2. MEDIUM          ++\n");
	printf("++             3. HARD            ++\n");
	printf("++             0. EXIT            ++\n");
	printf("++                                ++\n");
	printf("++++++++++++++++++++++++++++++++++++\n");
	printf("input :");
	scanf("%d",&select);
	switch(select)
	{
		case 1:
			EASY(n);
			break;
		case 2:
			MEDIUM(n);
			break;
		case 3:
			HARD(n);
			break;
		case 0: 
	    	break;
			
	}
}while(select != 0);
}
