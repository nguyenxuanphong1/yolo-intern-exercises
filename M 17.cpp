#include <stdio.h>
#include <string.h>
void Cut(int t){
    char str[100], substr[100];
    int start, end;
    
    printf("Moi ban nhap vao 1 chuoi : ");
    getchar();
	fgets(str, 100, stdin); 
    
    printf("vi tri bat dau: ");
    scanf("%d", &start);
    
    printf("vi tri ket thuc : ");
    scanf("%d", &end);
    
    strncpy(substr, &str[start], end-start+1); 
    substr[end-start+1] = '\0'; 
    
    printf("chuoi sau khi cat  : %s\n", substr);
    
  
}
