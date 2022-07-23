#include<stdio.h>

int main(void) {
    int n;
    for(;;) {
        printf("Height: ");
        scanf("%d",&n);
        if(n>=1) {
            if(n<=8) {
                break;
            }
        }
    }

    int c=n-1;
    for(int a=1;a<=n;a++) {
        for(int j=1;j<=c;j++) {
            printf(" ");
        }
        for(int b=1;b<=a;b++) {
            printf("#");
        }
        printf("\n");
        c-=1;
    }
}