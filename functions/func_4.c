#include<stdio.h>

void primefac(int x) {
    int count;
    for(count = 2; x>1; count++){
        while(x%count==0){
            printf("%d ",count );
            x = x/count;
        }
    }
}

int main() {
    int num;
    printf("enter no.: ");
    scanf("%d", &num);
    primefac(num);
}

