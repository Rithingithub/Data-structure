#include<stdio.h>

int main()
{
    int a[20], n, i, k, temp, ptr;
    printf("\t\tInsertion Sort\n");
    printf("How Many Elements You Want To Enter :   ");
    scanf("%d",&n);
    printf("%d\n",n);
    printf("Enter The List Of Elements :  \n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        printf("%d\t\t",a[i]);
    }
    a[0]=-1;
    for(k=2;k<=n;k++)
    {
        temp=a[k];
        ptr=k-1;
        while(temp<a[ptr])
        {
            a[ptr+1]=a[ptr];
            ptr--;
        }

        a[ptr+1]=temp;
    }
    printf("\nSorted List Of Elements : \n");
    for(i=1;i<=n;i++)
    {
        printf("%d\t\t\t",a[i]);
    }
}
