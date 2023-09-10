Q8 Write a function that compares two arrays and returns 1 if they are identical and 0
otherwise.

#include<stdio.h>

int check(int arr1[],int arr2[], int n) 
{
    int flag = 1;
    for(int i = 0; i < n; i++)
    {
        if(arr1[i] = arr2[i])
        {
            flag = 0;
            break;
        }
    }
    return flag;
}
void main() 
{
    int n;
    printf("Enter an integer in an array : ");
    scanf("%d",&n);
    
    int arr1[n],arr2[n];
    printf("Enter elements in first array ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter elements in second array ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr2[i]);
    }
    printf("The array is identical : %d\n",(arr1,arr2,n));
}
