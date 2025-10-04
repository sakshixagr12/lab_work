/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	int n;
	printf("enter the size of the array\n");
	scanf("%d",&n);

	int arr[n];
	printf("enter the elements\n");

	for(int  i =0; i<n; i++) {
		printf("enter element[%d]\t",i);
		scanf("%d",&arr[i]);
	}

	printf("following is required array\n");
	for(int i=0; i<n; i++) {
		printf("%d\t",arr[i]);
	}

	int pos;
	printf("enter the index of element you want to delete\n");
	scanf("%d",&pos);

	if(pos<0 || pos>=n) {
		printf("invalid index !!");
	} else {

		for(int i =pos ; i <n-1 ; i++) {
			arr[i]=arr[i+1];
		}

		n--;

		printf("after deleting the array is \n");

		for(int i=0; i<n; i++) {
			printf("%d\t",arr[i]);
		}
	}

	return 0;
}