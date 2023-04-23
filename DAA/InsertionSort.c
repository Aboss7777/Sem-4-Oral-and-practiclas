#include<stdio.h>
#include<conio.h>
void insertion(int a[], int n){
    int i,key,j;
    for(i=1;i<n;i++){
        key=a[i];
        j=i-1;
        while (j>0 && a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
}

void print(int a[], int n){
    int i;
    printf("The sorted array is: ");
    for ( i = 0; i < n; i++)
        printf("\n%d",a[i]);
}

void main(){
    int n,i, a[50];
    clrscr();
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    insertion(a,n);
    print(a,n);
    getch();
}