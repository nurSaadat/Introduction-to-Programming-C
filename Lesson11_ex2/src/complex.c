#include <stdio.h>
#include "complex.h"
#include "complexEnh.h"

complex add (complex x, complex y){

	complex result;
	result.re = x.re + y.re;
	result.im = x.im + y.im;
	return result;
}

complex sub (complex x, complex y){

	complex result;
	result.re = x.re - y.re;
	result.im = x.im - y.im;
	return result;
}

void print (complex x){
	printf ("%lf %lf \n", x.re, x.im);
}
