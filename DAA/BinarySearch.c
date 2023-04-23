#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,n,mid,x,flag=0,first,last,arr[50];
    int counter=0;
    clrscr();
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter elements of your sorted array: ");
    for ( i = 0; i<n; ++i)
        scanf("%d",&arr[i]);
    printf("Enter the element to be searched");
    scanf("%d",&x);
    first=0;
    last=n-1;
    while (first<=last)
    {
        counter++;
        mid=(first+last)/2;
        if(x==arr[mid]){
            flag=1;
            break;
        }    
        else{
            if(x<arr[mid])
                last=mid-1;
            else
                first=mid+1;
        }
    }
    if (flag==1)
        printf("The element found at position %d",mid+1);
    else
        printf("Element not found");
    printf("The number of times the loop ran was: %d",counter);   
    getch();
    return 0;
}