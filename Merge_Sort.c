#include<stdio.h>

void merge_sort(int[],int,int);
void merge(int[],int,int,int);

void main()
{
    int m[50],n,i;
    printf("\n enter the no of elements=");
    scanf("%d",&n);
    printf("\n enter the elements=");
    for(i=0;i<n;i++)
        scanf("%d",&m[i]);

    merge_sort(m,0,n-1);

    printf("\n your sorted array is=");
    for(i=0;i<n;i++)
        printf("%d ",m[i]);

}

void merge_sort(int m[],int left,int right)
{
    int mid;
    if(left<right)
    {
        mid=(left+right)/2;
        merge_sort(m,left,mid);
        merge_sort(m,mid+1,right);
        merge(m,left,mid,right);
    }
}

void merge(int m[],int left,int mid,int right)
{
    int i=left,j=mid+1,k=left,t[50],l;
    while(i<=mid && j<=right)
    {
        if(m[i]<m[j])
            {
                t[k]=m[i];
                i++;
            }
        else
            {
                t[k]=m[j];
                j++;
            }

        k++;
    }

    while(i<=mid)
    {
        t[k]=m[i];
        i++;
        k++;
    }
    while(j<=right)
    {
        t[k]=m[j];
        j++;
        k++;
    }

    for(l=left;l<=right;l++)
        m[l]=t[l];
}

