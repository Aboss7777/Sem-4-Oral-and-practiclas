#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,n,temp,arr[100];
    int counter=0;
    clrscr();
    printf("Enter the number of elements to be sorted");
    scanf("%d",&n);
    printf("Enter %d elements",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = i+1; j < n; j++)
        {
            counter++;
            if (arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            
        }
        
    }
    printf("The sorted array is");
    for ( i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("The number of times progam ran was:%d",counter);
    getch();
}