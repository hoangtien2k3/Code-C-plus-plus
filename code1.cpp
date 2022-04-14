
#include <stdio.h>

int main() {
	float a1, b1, c1, a2, b2, c2, dx, dy, d;
	printf( "Nhap a1, b1, c1: " );
	scanf( "%f%f%f", &a1, &b1, &c1 );
	printf( "Nhap a2, b2, c2: " );
	scanf( "%f%f%f", &a2, &b2, &c2 );

	d = ( a1 * b2 - a2 * b1 );
	dx = ( c1 * b2 - c2 * b1 );
	dy = ( a1 * c2 - a2 * c1 );
	if ( !d ) printf( ( !dx && !dy ) ? "Vo dinh\n" : "Vo nghiem\n" );
	else printf( "x = %g\ny = %g\n", dx / d, dy / d );
	
	return 0;
}