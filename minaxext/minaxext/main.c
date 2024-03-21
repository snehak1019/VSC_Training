/*
 * minaxext.c
 *
 * Created: 28-02-2024 10:06:02
 * Author : sneha
 */ 

#include <avr/io.h>
#include "minmax.h"
int min_max = 1;
    
int main()
{   int ans;
    int arr[7] = {2,3,4,5,12,56,7};
    
	ans=minmax(arr);
    return 0;
}