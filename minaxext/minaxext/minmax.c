/*
 * minmax.c
 *
 * Created: 28-02-2024 12:33:33
 *  Author: sneha
 */ 

extern int min_max;
int minmax(int arr[]){
	int min,max,ans,i=0;
	    min=arr[0];
	    max=arr[0];
		
	    for (int i=1;i<7;i++){

		    if ( min > arr[i])
		    {
			    min = arr[i];
		    }
		    if ( max < arr[i])
		    {
			    max = arr[i];
		    }
	    }
	    ans = (min_max==1)? max:min ;
		return ans;
}