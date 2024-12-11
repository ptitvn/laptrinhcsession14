#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[] = "Xin chao cac ban!"; 
    int len = strlen(chuoi); 
    char chuoiDaoNguoc[len + 1]; 

    for (int i = 0; i < len; ++i) {
        chuoiDaoNguoc[i] = chuoi[len - i - 1];
    }
    chuoiDaoNguoc[len] = '\0'; 

    printf("Chuoi ban dau la: %s\n", chuoi);
    printf("Chuoi dao nguoc la: %s\n", chuoiDaoNguoc);

    return 0;
}