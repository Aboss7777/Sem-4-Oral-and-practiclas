#include<stdio.h>
#include<conio.h>
#include<string.h>
int match(char st[100], char pat[100]){
    int n,m,i,j,temp=0,count=0;
    n=strlen(st);
    m=strlen(pat);
    for ( i = 0; i <=n-m; i++)
    {
        temp++;
        for ( j = 0; j < m; j++)
        {
            if (st[i+j]==pat[j])
                count++;  
        }
        if (count == m)
                return temp;
        count=0; 
    }  
    return -1;
}

int main(int argc, char **argv){
    char st[100],pat[100];
    int status;
    clrscr();
    printf("Enter the string: ");
    gets(st);
    printf("Enter the pattern: ");
    gets(pat);
    status = match(st,pat);
    if(status==-1)
        printf("No match found");
    else
        printf("Match found at position %d",status);
    getch();
    return 0;
}