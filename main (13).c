
#include <stdio.h>
void bs(int arr[],int beg,int end,int target)
{
    
    if(beg<=end){
        int mid=beg+(end-beg)/2;
    
    if(arr[mid]==target){
        printf("\n%d found at %d index\n",target,mid);
        return;
    }else if(target>arr[mid]){
        bs(arr,mid+1,end,target);
    }else{
        bs(arr,beg,mid-1,target);
    }}
    else{
        printf("\nelement not found");
        return;
    }
    
}
int main()
{
    int n;
    printf("enter the size of an array\n");
    scanf("%d",&n);
    int arr[n];
    printf("\nenter the elements of array in sorted way\n");
    for(int i=0;i<n;i++){
        printf("enter arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    int key;
    printf("\nenter the element you want to search\n");
    scanf("%d",&key);
    int beg=0;
    int end=n-1;
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    bs(arr,beg,end,key);

    return 0;
}
