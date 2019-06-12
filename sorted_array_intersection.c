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
        i++;
        
        else if(arr2[j]<arr1[i])
         j++;
    
         else{
            printf("%d",arr1[i++]);
            j++;
        }
    }
    
}
