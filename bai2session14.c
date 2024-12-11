#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[] = "Xin chao cac ban!"; 

    printf("Chuoi ban dau la: %s\n", chuoi);

    printf("Cac ky tu trong chuoi:\n");
    for (int i = 0; i < strlen(chuoi); i++) {
        printf("%c ", chuoi[i]);
    }

    return 0;
}