#include<stdio.h>

void bubble_sort(int a[],int n)
{
int temp,j,i;
for (i=0;i<n;i++)
{
    for(j=0;j<n-1;j++)
    {
        if (a[j]>a[j+1])
        {
        temp=a[j+1];
        a[j+1]=a[j];
        a[j]=temp;
        }
    }
}
printf("after sorting is :");
for (i=0;i<n;i++)
{
    printf("%d ",a[i]);
}

}
void main()
{
int a[100];
int temp,i,j,n;
printf("Enter a range :");
scanf("%d",&n);
printf("Enter numbers::");
for (i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
bubble_sort(a,n);
}
