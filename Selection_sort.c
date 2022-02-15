#include<stdio.h>

void min(int *arr, int k, int n);

int loc;

int main() {
    int a[20], num;
    printf("\t\t\t\t\tSelection Sort [ DS ]\n");
    printf("Enter the value of 'N' : ");
    scanf("%d",&num);
    printf("%d\n",num);
    printf("Enter 'N' elements : \n");
    for(int i=0;i<num;i++) {
        scanf("%d",&a[i]);
        printf("%d\t\t\t\t",a[i]);
    }
    for(int k=0;k<num;k++) {
        min(&a[0],k,num);
        int temp = a[k];
        a[k] = a[loc];
        a[loc] = temp;
    }
    printf("\nSelection Sort Result : \n");
    for(int i=0;i<num;i++) {
        printf("%d\t\t\t\t",a[i]);
    }
    return 0;
}

void min(int *a, int k, int n) {
    int m = a[k];
    loc = k;
    for(int j=k+1;j<n;j++) {
        if(m>a[j]) {
            m = a[j];
            loc = j;
        }
    }
}
