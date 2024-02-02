#include<stdio.h>
#include<string.h>
void Reverse1(int t)
{
	char s[100];
	printf("Moi ban nhap vao 1 chuoi ki tu:");
	getchar();
	fgets(s, 100, stdin);
	
	for(int i = 0; i < strlen(s)/2; i++)
	{
		char temp = s[i];
		s[i] = s[strlen(s) - i - 1];
		s[strlen(s) - i - 1] = temp;
	}
	printf("chuoi sau khi dao nguoc : %s\n",s);
	
}
