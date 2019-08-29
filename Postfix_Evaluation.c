#include<stdio.h>
#include<string.h>

void main()
{
    int i, l,stack[80],top=-1,n,x,y;
    char s[100];
    printf("\n enter the postfix notation with spaces b/w the operators and operands=");
    gets(s);
    l=strlen(s);
    //printf("%d ",l);
    for(i=0;i<l;i++)
    {
        //printf("%d ",s[i]-48);
        switch(s[i])
        {
            case '+': x=stack[top];
                      y=stack[top-1];
                      top=top-1;
                      x=x+y;
                      stack[top]=x;
                      break;

            case '-': x=stack[top];
                      y=stack[top-1];
                      top=top-1;
                      x=y-x;
                      stack[top]=x;
                      break;

            case '*': x=stack[top];
                      y=stack[top-1];
                      top=top-1;
                      x=y*x;
                      stack[top]=x;
                      break;

            case '/': x=stack[top];
                      y=stack[top-1];
                      top=top-1;
                      x=y/x;
                      stack[top]=x;
                      break;

            case ' ': break;

            default:
                      n=0;
                      while((s[i]!=32)&&(s[i]>=48 && s[i]<=57))
                      {
                        n=n*10+(s[i]-48);
                        i++;
                      }
                      top=top+1;
                      stack[top]=n;

        }
    }

    printf("\n answer of the expression is=%d",stack[top]);
}
