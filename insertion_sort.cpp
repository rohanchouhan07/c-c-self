#include<stdio.h>
void main()
{
    int a[]={10,80,60,50,20};
    int temp,q,p,index,min;

    for(p=0;p<5;p++){
        min=a[p];
        index=p;
        for(s=0;s<6;s++){
            if(min<a[s]){
                min=a[s];
                index=s;
            }

        }
    temp=a[p];
    a[p]=a[index];
    a[index]=temp;
    }
    for(int i=0;i<6;i++){

    printf("a[i]");
    }
}
