#include<stdio.h>
void Arrange(int t){
	
    int n, a[n];
	printf("Moi ban nhap vao so phan tu mang:");
	scanf("%d",&n);
	for(int i = 0; i < n; i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}

  for(int i = 0; i < n-1; i++)
  {
  	int smallestposition = i;
  	for(int j = i + 1; j < n; j++)
	  {
  	    if(a[j] < a[smallestposition])
		  {
		  	smallestposition = j;
		  }	
	  }
	  int temp =  a[i];
	  a[i] = a[smallestposition];
	  a[smallestposition] = temp;
  }	
  	printf("Day theo thu tu tang dan :\n");
     for(int i = 0; i < n; i++){
   	printf("a[%d] = %d\n",i,a[i]);
    }


  for(int i = 0; i < n-1; i++)
  {
  	int biggestposition = i;
  	for(int j = i + 1; j < n; j++)
	  {
  	    if(a[j] > a[biggestposition])
		  {
		  	biggestposition = j;
		  }	
	  }
	  int temp =  a[i];
	  a[i] = a[biggestposition];
	  a[biggestposition] = temp;
  }	

	printf("Dayx theo thu tu giam dan :\n");
	for(int i = 0; i < n; i++)
	{
   	printf("a[%d] = %d\n",i,a[i]);
    }
}
