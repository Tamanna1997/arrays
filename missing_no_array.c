int main()
{
    int i,n,total,miss;
    int arr[]={2,7,1,3,6,4};
    n=sizeof(arr)/sizeof(arr[0]);
    total=(n+1)*(n+2)/2;
    for(i=0;i<n;i++)
    total=total-arr[i];
    printf("%d",total);
    
}
