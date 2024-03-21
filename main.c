/*
 * adc_dac.c
 *
 * Created: 28-02-2024 12:40:02
 * Author : sneha
 */ 

#include <avr/io.h>
#include "adc.h"
#include "dac.h"
float Vref=3.3;
int main(void)
{
    float vin_adc[]={0.3,0.6,0.9,1.2,1.5,1.8,2.1,2.5,2.7,3.0};	
	int adc_resolution=14,adc_ans[10];
	float dac_ans[10];
	int dac_resolution=16;
	float error[10];
	for (int i=0;i<10;i++){
		adc_ans[i]=adc(vin_adc[i],adc_resolution);
		dac_ans[i]=dac(adc_ans[i],dac_resolution);
		error[i] = vin_adc[i]-dac_ans[i];
	}
	
	return  0;
	
}

