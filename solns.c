/* Enter your solutions in this file */
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

int min(const int arr[],int n){
	int Min=arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]<Min){
			Min=arr[i];
		}
	}
	return Min;
}

float average(const int arr[],int n){
	float sum=0.0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	return sum/(float)n;
}


int mode(int arr[],int n){
	int num,temp_num;
	int count=0,temp_count=0;
	// sort(arr,n);
	int temp;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			if(arr[j+1]<arr[j]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	temp_num=arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]==temp_num){
			temp_count++;
		}
		else{
			if(temp_count>count){
				count=temp_count;
				num=temp_num;
			}
			temp_num=arr[i];
			temp_count=1;
		}
	}
	if(temp_count>count){
		count=temp_count;
		num=temp_num;
	}
	return num;
}



int factors(int num,int arr[]){
	int prime=2,ref=0;
	int count=0,index=0;
	while(num!=1){
		if(num%prime==0){
			num=num/prime;
			count++;
			arr[index]=prime;
			index++;
		}
		else{
			while(1){
				prime++;
				for(int j=2;j<prime;j++){
					if(prime%j==0)
						ref++;
				}
				if(ref==0){
					break;
				}
				else{
					ref=0;
				}
			}
		}
	}
	return count;
}

