/*
 * minaxext.c
 *
 * Created: 28-02-2024 10:06:02
 * Author : sneha
 */ 

#include <avr/io.h>
#include "minmax.h"
int min_max = 1;
//minmax
int main()
{   int ans;
    int arr[7] = {1,3,4,5,10,45,7};
   	ans=minmax(arr);
    return 0;
}