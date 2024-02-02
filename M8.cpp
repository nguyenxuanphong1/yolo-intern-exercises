#include<stdio.h>
#include<string.h>

void Find(int t){
   char string1[100], string2[100];
   
   int position = 0;
   
   printf("Moi ban nhap chuoi 1: ");
   getchar();
   fgets(string1,sizeof(string1),stdin);
   strtok(string1, "\n"); 
   
   printf("Moi ban nhap chuoi 2: ");
   fgets(string2,sizeof(string2),stdin);
   strtok(string2, "\n"); 
   
   char *ptr = strstr(string1, string2);
   
   if(ptr) {
      position = ptr - string1 + 1; 
      printf("Chuoi thu 2 xuat hien o vi tri %d\n", position);
   }
   else {
      printf("chuoi thu 2 khong tim thay o chuoi 1.\n");
   }
}

