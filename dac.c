/*
 * dac.c
 *
 * Created: 28-02-2024 12:43:53
 *  Author: sneha
 */ 

#include <math.h>
extern float Vref;
float dac(int dec,int n){
	float volt;
	volt = (dec * Vref)/(pow(2,n));
	return volt;
		
}