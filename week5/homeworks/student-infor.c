#include <stdio.h>
int main (){
    char ten1[50], ten2[50], que1[50], que2[50];
    int tuoi1, tuoi2;
    ten2 != que1;

    
gets(ten1);
gets(que1);
scanf("%d\n", &tuoi1); 
   
gets(ten2);
gets(que2); 
scanf("%d", &tuoi2);
   
    printf("Nhap thong tin sinh vien 1: \n ");
    printf("- Ten: %s\n", ten1);
    printf("- Que quan: %s\n", que1);
    printf("- Tuoi: %d\n", tuoi1);
    
    printf("Nhap thong tin sinh vien 2: \n ");
    printf("- Ten: %s\n", ten2);
    printf("- Que quan: %s\n", que2);
    printf("- Tuoi: %d", tuoi2);

    printf("\nCac sinh vien da nhap vao:\n");
    printf("*-----------------------------------------------*\n");
    printf("| Ten | Que quan | Tuoi |\n");
    printf("*-----------------------------------------------*\n");
    printf("| %s | %s | %d |\n", ten1, que1, tuoi1);
    printf("*-----------------------------------------------*\n");
    printf("| %s | %s | %d |\n", ten2, que2, tuoi2);
    printf("*-----------------------------------------------*");
    
    
    return 0;
}