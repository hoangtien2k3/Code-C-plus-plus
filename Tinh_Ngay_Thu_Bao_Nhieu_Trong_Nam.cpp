
//  Viết chương trình nhập ngày, tháng, năm. Tính xem ngày đó là ngày thứ bao nhiêu trong năm.

#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdbool.h>
#include<string.h>


bool CheckNamNhuan(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

int CheckNgayTrongThang(int month, int year) {
    int ngaytrongthang;
    switch(month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            ngaytrongthang = 31;
            break;
        case 4: case 6: case 9 : case 11:
            ngaytrongthang = 30;
            break;
        default: 
            return (CheckNamNhuan(year))?(ngaytrongthang = 29):(ngaytrongthang = 28);
    }
    return ngaytrongthang;
}

int CheckNgayTrongNam(int day, int month, int year){
    int S = day; 
    for(int i = 1; i < month; i++) {
        S += CheckNgayTrongThang(i, year); // i để sau vòng for sẽ thay lần lượt thắng cần tính vào
    }
    return S;
}

int main() {
    int day, month, year;
    char TL;
    do {
        do {
            printf ("\nNhap vao day: "); scanf ("%d", &day);
            printf ("Nhap vao month: "); scanf ("%d", &month);
            printf ("Nhap vao year: "); scanf ("%d", &year);
        } while (((day < 0 || day > 31) || (month < 0 || month > 12) || (year < 0 || year > 10000)) && printf ("\nError, Nhap lai: "));
        printf ("\nTong so ngay: %d", CheckNgayTrongNam(day, month, year));
        printf ("\nBan co muon tiep tuc(Y, N) : "); fflush(stdin); TL = getchar(); 
    } while (TL == 'Y' || TL == 'y');

    return 0;
}







////////////////////
//! Cách ngắn gọn hơn nhiều
/*
#include <stdio.h>
int main() {
    unsigned int d, m, y, s, i;
    printf( "Nhap ngay, thang, nam: " );
    scanf( "%u%u%u", &d, &m, &y );
    s = d;
    for ( i = 1; i < m; ++i )
    switch ( i ) {
        case 4: case 6: case 9: case 11: s += 30; break;
        case 2: s += 28 + (( y % 4 == 0 && y % 100 ) || y % 400 == 0); break;
        ! case 2: s += (( y % 4 == 0 && y % 100 ) || y % 400 == 0) ? 29 : 28; break;
    default: s += 31;
    }
    printf( "Ngay thu: %u\n", s );
    return 0;
}

*/


