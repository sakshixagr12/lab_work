// program to merge two sorted array
#include <stdio.h>

int main() {

	int arr1[5]= {5,9,20,30,40};
	int arr2[5]= {1,2,10,11,12};
	int arr3[10];
	int i =0, j=0;
	int k=0;
	
	while(i<5&&j<5&&k<10) {
		if(arr1[i]<=arr2[j]) {
			arr3[k++]=arr1[i++];
		} else {
			arr3[k++]=arr2[j++];
		}
	}
	
	while(i<5&&k<10) {
		arr3[k++]=arr1[i++];
	}
	
	while(j<5&&k<10) {
		arr3[k++]=arr2[j++];
	}
	
	printf("first array is \n");
	for(int i=0; i<5; i++) {
		printf("%d\t",arr1[i]);
	}
	
	printf("\nsecond array is\n");
	for(int j =0; j<5; j++) {
		printf("%d\t",arr2[j]);
	}
	
	printf("\nafter merging two sorted array we have\n");
	for(int k=0; k<10; k++) {
		printf("%d\t",arr3[k]);
	}
	
	return 0;
}