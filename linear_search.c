#include<stdio.h>
void linear_search(int a[],int r, int search)
{
    int k=0,i;
    for (i=0;i<r;i++){
        if(a[i]==search){
            printf("num is found at position %d ",i+1);
            k++;
            break;
        }
        }
        if(k==0){
            printf("num not founded!!!!!");
    }
}

void main()
{
    int a[100],r,search,i;
printf("Enter range of the numbers  :::");
scanf("%d",&r);
printf("enter %d numbers :",r);
for(i=0;i<r;i++)
    {
    scanf("%d",&a[i]);
    }
printf("Enter a number you want to search:::");
scanf("%d",&search);
linear_search(a,r,search);

/*for (i=0;i<r;i++)
    {
    if (a[i]==search)
        {
        printf("the is founded at position %d :" ,i+1);
        break;
        k++;
        }
    }
if(k==0){
    printf("number is not found!!!!");
}
    }
/*if (k>0){
    printf("number is found at position %d",i+1);
        }*/
}
