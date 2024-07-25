#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements : ");
    for(int i=0;i<n;i++)scanf("%d",&arr[i]);
    int average=0;
    for(int i=0;i<n;i++)
    {
        average+=arr[i];
    }
    average/=n;
    printf("The average of these elements is :- %d",average);
}
