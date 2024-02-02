#include<stdio.h>
#include<string.h>

void Find(int t){
   char string1[100], string2[100];
   
   int position = 0;
   
   printf("Enter the first string: ");
   getchar();
   fgets(string1,sizeof(string1),stdin);
   strtok(string1, "\n"); 
   
   printf("Enter the second string: ");
   fgets(string2,sizeof(string2),stdin);
   strtok(string2, "\n"); 
   
   char *ptr = strstr(string1, string2);
   
   if(ptr) {
      position = ptr - string1 + 1; 
      printf("The second string appears at position %d\n", position);
   }
   else {
      printf("The second string was not found in the first string.\n");
   }
}

