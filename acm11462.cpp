#include<algorithm>
#include<stdio.h>
using namespace std;
long int a[2000005],i,n;
int main()
{
    while (scanf("%ld",&n)!=EOF)
    {
        if (n==0)
        {
            break;
        }
        for (i=0;i<n;i++)
        {
            scanf("%ld",&a[i]);
        }
        sort(a,a+n);
        for (i=0;i<n;i++)
        {
            printf("%ld",a[i]);
            if (i<(n-1))
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
/*

#include<stdio.h>
#include<stdlib.h>

void InsertionSort(int* elements, int);
int main()
{
    int n, *arr;
    while(scanf("%d",&n) && n!=0)
    {
        arr = (int*) malloc (n * sizeof(int));
        int i=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }

        InsertionSort(arr,n);
        for(i=0;i<n;i++)
        {
	   if(i!=n-1)
	   printf("%d ",arr[i]);
	   else
	   printf("%d",arr[i]);
	}
        printf("\n");
    }
    return 0;
}

void InsertionSort(int *elements , int no_of_elements){
    int temp, i , j;
    for(i = 0; i < no_of_elements; i++)
    {
        temp = elements[i];
        for(j = i-1; j >= 0 && temp < elements[j]; j--)
        {
            elements[j+1] = elements[j];
        }
        elements[j+1] = temp;
    }
}*/

