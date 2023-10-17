#include <stdio.h>
int main()
{
    int n,k,key,i,j; 
    printf("Enter the value of n");
     scanf("%d",&n);
    int arr[n],temp;
    printf("Enter the data values");
    for(k=0;k<n;k++)
     scanf("%d",&arr[k]); 
    for(i=1;i<n;i++)
    {
        int key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
        arr[j+1]=arr[j];
        j--;
        }
          arr[j+1]=key;
    }
     for(k=0;k<n;k++)
       printf("\t %d \t" ,arr[k]);
    return 0;
}


