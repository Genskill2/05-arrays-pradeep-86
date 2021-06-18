#include <stdio.h>

int max(const int arr[],int n){
	int Max=arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]>Max){
			Max=arr[i];
		}
	}
	return Max;
}


