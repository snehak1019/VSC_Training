/*
 * adc.c
 *
 * Created: 28-02-2024 12:43:40
 *  Author: sneha
 */ 

#include <math.h>
extern float Vref;
int adc(float vin,int n){
	 int digital;
	 digital = ((pow(2,n))* vin)/Vref;
	 return digital;
 }