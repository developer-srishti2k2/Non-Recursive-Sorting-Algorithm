#include <stdio.h>
void main()
{
    int i,j,temp,a[10];
    printf("Enter an array of ten elements\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<10-i-1;j++)
        {
            if(a[j+1]<a[j])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Sorted elements: ");
    for(i=0;i<10;i++)
    {
        printf("%d ", a[i]);
    }
}
