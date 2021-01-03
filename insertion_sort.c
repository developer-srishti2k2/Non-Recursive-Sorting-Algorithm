#include<stdio.h>
void main()
{
    int i,j,count,temp;
    printf("how many number u are going to enter:?\n");
    scanf("%d",&count);
    int a[count];
    printf("enter %d elements: ",count);
    for(i=0;i<count;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<count;i++)
    {
        temp=a[i];
        j=i-1;
        while(temp<a[j]&&(j>=0))
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
    printf("Order of sorted elements\n");
    for(i=0;i<count;i++)
    {
        printf(" %d",a[i]);
    }
}

