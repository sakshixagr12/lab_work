
#include <stdio.h>
void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
int partition (int arr[], int low, int high) {
	int pivot = arr[low];
	int i = low;
	int j = high;
	while (i<j) {
		while( arr[i] <= pivot && i <= high-1) i++;
		while( arr[j] > pivot && j >= low+1) j--;
		if( i < j) swap(&arr[i], &arr[j]);
	}
	swap(&arr[low],&arr[j]);
	return j;
}
void qs (int arr[],int low, int high) {
	if ( low < high ) {
		int idx = partition (arr, low, high ) ;
		qs(arr, low, idx-1);
		qs(arr, idx + 1, high );
	}

}
int main()
{
	int n ;
	printf("enter the size of the array\n");
	scanf("%d",&n);

	int arr[n];
	printf("\nenter the elements of the array\n");
	for ( int i =0 ; i< n ; i++) {
		scanf("%d",& arr[i]);
	}
	printf("\n array before sorting\n");
	for ( int i = 0 ; i<n ; i++) {
		printf("%d\t",arr[i]);
	}
	qs(arr,0,n-1);
	printf("\n array after sorting\n");

	for(int i = 0 ; i<n ; i++) {
		printf("%d\t",arr[i]);
	}
	return 0;
}