

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#include<stdlib.h>


void dao_nguo_chuoi(char str[]) {
    for(int i = strlen(str) - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
}

void Ky_Tu_Hoa(char str[]) {
    for(int i=0; i<strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
    }
    printf("\n%s", str);
}


void str_reverse(char str[]) {
    int length = strlen(str);
    for(int i=0; i<length/2; i++) {
        char temp = str[i];
        str[i] = str[length-i-1];
        str[length-i-1] = temp;
    }
    printf("\nChuoi dao nguoc: %s", str);
}


int main() {
    char str[100];
    printf("Nhap vao chuoi: ");
    gets(str);

    dao_nguo_chuoi(str);

    // printf("\nDao nguoc chuoi: %s", strrev(str));
    printf("\nCHUOI hoa: %s", strupr(str));


    Ky_Tu_Hoa(str);


    str_reverse(str);

    printf("\nDao Nguoc: %s", DaoNguoc(str));




    printf("\nSize string: %d", strlen(str));

    return 0;
}