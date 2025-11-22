
#include <stdio.h>
#include <stdlib.h>
#include<limits.h>

int maximum(int arr[],int n){
    int max= INT_MIN;
    for(int i =0;i<n;i++){
        if(arr[i]>max){
            max= arr[i];
        }
        
    }
    return max;
}
void countS(int *arr,int n){
    int max= maximum(arr,n);
    int *count=(int *)malloc((max+1)*sizeof(int));
    for(int i =0;i<=max;i++){
        count[i]=0;
    }
    for(int i =0;i<n;i++){
        count[arr[i]]++;
    }
    for(int i =0;i<=max;i++){
        while(count[i]!=0){
            printf("%d\t",i);
            count[i]--;
        }
    }
    free(count);
}
int main() {
    int n ;
    printf("enter the size of an array\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of the arrray\n");
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n");
    printf("following is array (unsorted)\n");
    for(int j =0;j<n;j++){
        printf("%d\t",arr[j]);
    }
    printf("\n");
    countS(arr,n);

    return 0;
}