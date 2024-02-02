#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int Chain(int t)
{
	char c1[1000], c2[1000],a[100][100],b[100][100];
	printf("Moi ban nhap chuoi b:");
	fgets(c1, 1000, stdin);
	printf("Moi ban nhap chuoi a:");
    fgets(c2, 1000, stdin);
	int n = 0, m = 0;
	
	char *token = strtok(c1, " ");
	while(token != NULL)
	{
		strcpy(a[n++],token);
		token = strtok(NULL, " ");
	}
	
	token = strtok(c2, " ");
	while(token != NULL)
	{
		strcpy(b[m++],token);
		token = strtok(NULL, " ");
	}
	
	int cnt = 0;
	for(int i = 0; i < n; i++)
	{
		while(strcmp(a[i],a[i+1]) == 0) ++i;
		for(int j = 0; j < m; j++)
		{
			if(strcmp(a[i],b[j]) == 0)
			{
				cnt++;
				break;
			}
		}
	}
	printf("Tong so lan xuat hien cua chuoi a trong chuoi b la : %d",cnt);
}
