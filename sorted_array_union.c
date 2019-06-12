#include <stdio.h>
int main()
{
    int arr1[]={1,2,4,5,6,8};
    int arr2[]={2,3,5,6};
    int m= 6;
    int n= 4;
    
    int i=0 , j=0;
    while(i<m && j<n)
    {
        if(arr1[i]<arr2[j])
        printf("%d",arr1[i++]);
        
        else if(arr2[j]<arr1[i])
         printf("%d",arr2[j++]);
    
         else{
            printf("%d",arr1[i++]);
            j++;
        }
    }
    while(i<m )
        printf("%d",arr1[i++]);
    while(j<n )
    printf("%d",arr2[j++]);
}
