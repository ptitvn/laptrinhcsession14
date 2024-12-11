#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[100]; 

    printf("Nhap vao mot chuoi:\n ");
    fgets(chuoi, 100, stdin); 

    chuoi[strcspn(chuoi, "\n")] = '\0';

    printf("Chuoi ban vua nhap vao la: %s\n", chuoi);
    printf("Do dai cua chuoi la: %ld ky tu \n", strlen(chuoi));

    return 0;
}