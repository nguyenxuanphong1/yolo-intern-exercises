#include<stdio.h>
#include<string.h>

const char* k[] = {" ","mot","hai","ba","bon","nam","sau","bay","tam","chin","muoi","muoi mot", "muoi hai", "muoi ba","muoi bon", "muoi nam","muoi sau", "muoi bay","muoi tam","muoi chin"};
const char* m[] = {"","hai muoi","ba muoi","bon muoi","nam muoi","sau muoi","bay muoi","tam muoi","chin muoi"};

void convertmoneytowords(int c, char* result)
{
	if(c<20)
	{
		strcpy(result,k[c]);
		return;
	}
	if(c<100)
	{
		sprintf(result,"%s%s%s",k[c/10]," muoi", ((c % 10 != 0)? " ":" "),m[c%10]);
		convertmoneytowords(c%10, result + strlen(result));
		return;
	}
	
	if(c<1000)
	{
		sprintf(result,"%s%s%s",k[c/100]," tram ",((c % 100 != 0)? " ":" "),m[c%100]);
		convertmoneytowords(c%100, result + strlen(result));
		return;
	}
	
	if(c<100000)
	{
		convertmoneytowords(c / 1000, result);
		strcat(result," trieu ");
		if(c%1000 !=0)
		{
			strcat(result," ");
			convertmoneytowords(c%1000, result + strlen(result));
		}
		return;
	}
	
	if(c<1000000)
	{
		convertmoneytowords(c/1000, result);
		strcat(result," trieu ");
		if(c%1000 !=0)
		{
			strcat(result," ");
			convertmoneytowords(c%1000, result + strlen(result));
		}
		return;
	}
	
	if(c<10000000000)
	{
		convertmoneytowords(c/1000000, result);
		strcat(result," ty ");
		if(c%1000000 !=0)
		{
			strcat(result," ");
			convertmoneytowords(c%1000000, result + strlen(result));
		}
		return;
	}

}
void switchto(int t)
{
	int a;
	char b[100];
	printf("moi ban nhap vao so tien bang tieng :");scanf("%d",&a);
	convertmoneytowords(a,b);
	printf("tien doc thanh chu : %s nghin dong",b);
}


