#include<stdio.h>
#include<stdlib.h>
int increasing(int *a,int len);
int display(int *a,int len);

int main()
{
        int arr[]={1,4,7,3,10,8,4,6,11,9};
        int len=sizeof(arr)/sizeof(arr[0]);
        printf("print before sorting\n");
        display(arr,len);
        increasing(arr,len);
        printf("print after sorting\n");
        display(arr,len);

}

int display(int *a, int len)
{
        int i;
        for (i = 0; i < len-1; i++)
        {
                printf("%d\n", a[i]);
        }
        return 0;
}

int increasing(int *a,int len)
{

        int i,j,temp;
        for(i=0;i<len;i++)
        {
                for(j=0;j<(len-i-1);j++)/*condition j<(n-i-1) means once the highiest valuereached highest position(arr[last elemaneent)) we will reduce                                                the size of arr by using (n-i) */
                {
                        if(a[j] > a[j+1])/*move the highest elememt front position and lowest element to back */
                        {
                                temp=a[j];
                                a[j]=a[j+1];
                                a[j+1]=temp;
                                printf(" => swapped [%d, %d]\n",a[j],a[j+1]);
                         }
                        else
                        {
                                printf(" => not swapped\n");
                         }
                }
        }

        return 0;
}
