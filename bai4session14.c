#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[] = "Xin chao cac ban!"; 
    char kyTuCanTim;
    int dem = 0;

    printf("Nhap vao ky tu can tim:\n ");
    scanf(" %c", &kyTuCanTim);

    for (int i = 0; i < strlen(chuoi); i++) {
        if (chuoi[i] == kyTuCanTim) {
            dem++;
        }
    }

    printf("Ky tu '%c' xuat hien %d lan trong chuoi.\n", kyTuCanTim, dem);

    return 0;
}