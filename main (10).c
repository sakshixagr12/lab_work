#include<stdio.h>

int insert(int arr[],int n,int key) {
	int beg=0,end=n-1;
	while(beg<=end) {
		int mid=(beg+end)/2;

		if(arr[mid]==key) {
			return mid;

		} else if(arr[mid]>key)   end=mid-1;
		else beg=mid+1;

	}
	return beg;
}
int main() {
	int n;
	printf("enter the size of the array\n");
	scanf("%d",&n);

	int arr1[n];
	printf("enter the elements {sorted}\n");
	for(int i=0; i<n; i++) {
		printf("arr[%d] : ",i);
		scanf("%d",&arr1[i]);
	}
	printf("array is\n");
	for(int i=0; i<n; i++) {
		printf("%d\t",arr1[i]);
	}

	int value;
	printf("\nenter the value you want to enter\n");
	scanf("%d",&value);

	int position = insert(arr1,n,value);
	printf("element %d is inserted at %d ",value,position);
	for (int i = n; i > position; i--) {
		arr1[i] = arr1[i - 1];
	}

	arr1[position]=value;
	n++;

	printf("\nupdated array is \n");
	for(int i =0 ; i<n; i++) {
		printf("%d\t",arr1[i]);
	}

	return 0;
}