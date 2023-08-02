#include <stdio.h>
int binary_search(int arr[],int n,int target){
    int s=0,e=n-1,mid;
    while(s<=e){
        mid=s+(e-s)/2;
        if(arr[mid]==target)
            return mid;
        else if(arr[mid]>target)
            e=mid-1;
        else
            s=mid+1;
    }
    return -1;
}
int main()
{
    int n=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in the array: ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int target=0;
    printf("Entet the target: ");
    scanf("%d",&target);
    int a=binary_search(arr,n,target);
    printf("Index of the target is: ");
    printf("%d",a);
}
