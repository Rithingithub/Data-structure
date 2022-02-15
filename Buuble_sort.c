#include <stdio.h>

int main() {
    int a[20], num, flag;
    printf("\t\t\t\t\tBubble Sort [ DS ]\n");
    printf("Enter the value of 'N' : ");
    scanf("%d",&num);
    printf("%d\n",num);
    printf("Enter 'N' elements : \n");
    for(int i=0;i<num;i++) {
        scanf("%d",&a[i]);
        printf("%d\t\t\t\t",a[i]);
    }
    for(int i=0;i<num-1;i++) {
        for(int j=0;j<num-i-1;j++) {
            flag = 0;
            if(a[j]>a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                flag++;
            }
        }
        if(flag==0) {
            break;
        }
    }
    printf("\nBubble Sort Result : \n");
    for(int i=0;i<num;i++) {
        printf("%d\t\t\t\t",a[i]);
    }
    return 0;
}
