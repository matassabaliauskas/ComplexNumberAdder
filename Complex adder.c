#include <stdlib.h>
#include <stdio.h>

typedef struct {
	int re;
	int im;
} complex_t;


complex_t Make(int r, int i){
	complex_t z;
	z.re = r;
	z.im = i;
	return z;
}

complex_t ComplexAdder(complex_t c1, complex_t c2){
	complex_t sum;
	sum.re = c1.re + c2.re;
	sum.im = c1.im + c2.im;
	return sum;
}

int main(void){
	// this program will add complex numbers
	complex_t c1, c2;
	c1 = Make(2,1);
	c2 = Make(10,-3);
	
	complex_t csum; 
	csum = ComplexAdder(c1, c2);
	printf("The sum of %d + %di and %d + %di is: %d + %di", c1.re, c1.im, c2.re, c2.im, csum.re, csum.im);
	
	return 0;
}
