/*
 * complexSupEnh.c
 *
 *  Created on: 29 но€б. 2017 г.
 *      Author: Sunny
 */

#include "complexEnh.h"
#include "complex.h"

complex conjugate(complex x){
	complex result;
	result.im = -x.im;
	return result;
}

complex multiply(complex x, complex y){
	complex result;
	result.re = x.re*y.re - x.im*y.im;
	result.im = x.im*y.re + x.re*y.im;
	return result;
}

complex divide(complex x, complex y){
	complex result;
	result.re = (x.re*y.re + x.im*y.im)/(y.re*y.re + x.re*x.re);
	result.im = (x.im*y.re - x.re*y.im)/(y.re*y.re + x.re*x.re);
	return result;

}


