#include <stdio.h>
int a[10]={7,8,9,3,2,1,5,6,4,0};
int main()
{
    for(int k=0;k<10-1;k++)
    {
        for(int i=0;i<10-1;i++)
        {
            if(a[i]>a[i+1])
            {
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        for(int i=0;i<10;i++)
        printf("%d ",a[i]);
        printf("\n");
    }

    return 0;
}

