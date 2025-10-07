// first occurence of required search value
#include<stdio.h>

int firstOccurence(int arr[],int n,int key) {
	int beg=0,end=n-1,result=-1;

	while(beg<=end) {

		int mid=(beg+end)/2;

		if(arr[mid]==key) {
			result=mid; //we found the element
			end=mid-1;  //looking for the first occurence of value
		}
		else if(arr[mid]>key) {
			end=mid-1;

		} else {
			beg=mid+1;

		}
	}
	return result;
}
int main() {
	int n;
	printf("enter the size of the array\n");
	scanf("%d",&n);

	int arr1[n];
	printf("enter the elements {sorted}\n");
	for(int i=0; i<n; i++) {
		scanf("%d",&arr1[i]);
	}
	printf("array is\n");
	for(int i=0; i<n; i++) {
		printf("%d\t",arr1[i]);
	}

	int value;
	printf("\nenter the value whose first occurence you want\n");
	scanf("%d",&value);

	int res=firstOccurence(arr1,n,value);
	if(res==-1) {
		printf("element not found !\n");
	} else {
		printf("element %d found at %d index",value,res);
	}
	return 0;

}

