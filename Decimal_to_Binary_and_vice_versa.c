#include<stdio.h>
#include<string.h>

int pow(int,int);

void main()
{
    int i,dec,bin[50],r,top=-1,ch,d=0,l,x,k=0;
    char b[50];

    do{
    printf("\n press...");
    printf("\n 1. for decimal to binary");
    printf("\n 2. for binary to decimal");
    printf("\n 3. for exit \n");
    scanf("%d",&ch);

    switch(ch){
        case 1:
                printf("\n enter the decimal no.=");
                scanf("%d",&dec);

                while(dec!=0)
                {
                    r=dec%2;
                    top=top+1;
                    bin[top]=r;
                    dec=dec/2;
                }

                printf("\n your binary no. is=");
                for(i=top;i>=0;i--)
                printf("%d",bin[i]);
                printf("\n");

                break;

        case 2:
                printf("\n enter binary no.=");
                fflush(stdin);
                gets(b);
                l=strlen(b);
                //printf("%d",l);
                for(i=l-1;i>=0;i--)
                {
                    //printf("%d ",i);
                    if(b[i]==49)
                        x=1;
                    else
                        x=0;
                    //printf("%d ",x);
                    d=d+(pow(2,k)*x);
                    k++;
                }
                printf("\n decimal no.=%d",d);
                printf("\n");
                break;

        case 3: break;

        default:
                printf("\n not a valid binary code");
    }
    }while(ch<=2);
}

int pow(int a,int b)
{
    if(b==0)
        return 1;
    else
        return (a*pow(a,b-1));
}
