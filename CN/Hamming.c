#include<stdio.h>
void main(){
    int data[10],datarec[10],c,c1,c2,c3,i;

    printf("Enter 4 data bits one by one: ");
    scanf("%d",&data[0]);
    scanf("%d",&data[1]);
    scanf("%d",&data[2]);
    scanf("%d",&data[4]);

    //calculation of even parity
    data[6]=data[0]^data[2]^data[4];
    data[5]=data[0]^data[1]^data[4];
    data[3]=data[0]^data[1]^data[2];

    printf("Encoded data is: ");
    for ( i = 0; i < 7; i++)
        printf("%d",data[i]);
    
    printf("\nEnter received data bits one by one: ");
    for(i=0;i<7;i++)
        scanf("%d",&datarec[i]);

    c1=datarec[6]^datarec[4]^datarec[2]^datarec[0];
    c2=datarec[5]^datarec[4]^datarec[1]^datarec[0];
    c3=datarec[3]^datarec[2]^datarec[1]^datarec[0];
    c=c3*4+c2*2+c1;

    if(c==0)
        printf("No error while transmission of data \n");
    else{
        printf("Error at position :%d \n", c);

        printf("Sent data: ");
        for ( i = 0; i < 7; i++)
            printf("%d",data[i]);

        printf("\nReceived Data: ");
        for(i=0;i<7;i++)
            printf("%d",datarec[i]);

        printf("\nCorrect message is: \n");
        if(datarec[7-c]==0)
            datarec[7-c]=1;
        else 
            datarec[7-c]=0;
        for(i=0;i<7;i++)
            printf("%d",datarec[i]);
    }   
}
