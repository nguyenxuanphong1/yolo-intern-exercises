#include <stdio.h>
void Cutstring(int t){
    char str[100], substr[100];
    int start, number_char;
    
    printf("Moi ban nhap vao 1 chuoi :");
    getchar();
	fgets(str, 100, stdin); 
    
    printf("vi tri bat dau : ");
    scanf("%d", &start);
    
    printf("so ki ki tu can cat : ");
    scanf("%d", &number_char);
    
    printf("chuoi sau khi cat  : ");
    for(int i = start; i < number_char; i++)
	{
		printf("%c",str[i]);
	}
	printf("\n");
}
