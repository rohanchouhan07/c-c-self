#include<stdio.h>
void main()
{
    int a[10],N;
    int temp,p,s,index,min;
printf("Enter a range:");
scanf("%d",&N);
printf("Enter %d Numbers:",N);
for(int i=0;i<N;i++){

    scanf("%d",&a[i]);
    }
    for(p=0;p<N-1;p++){
        min=a[p];
        index=p;
        for(s=p+1;s<N;s++){
            if(min>a[s]){
                min=a[s];
                index=s;
            }

        }
    temp=a[p];
    a[p]=a[index];
    a[index]=temp;
    }
    printf("After sorting :\n");
    for(int i=0;i<N;i++){

    printf("%d  ",a[i]);
    }
}
