#include<stdio.h>
#include<ctype.h>
int main(){
    int count = 0;
    char strr[] = "Hello World";
    int length = sizeof(strr)/sizeof(char);
    for(int i = 0; i < length -1; i++){
        if(isapha(strr[i]) != 0){
            count++;

        }
    }
    printf("So luong ky tu la chu = %d\n", count);
    return 0;
}