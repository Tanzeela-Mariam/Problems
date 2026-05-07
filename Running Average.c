#include<stdio.h>

int main(){
    int x;
    float y=0;
    scanf("%d", &x);
    int a[x];

    for(int i=0; i<x; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<x; i++){
        y=y+a[i];
        printf("%f\n", y/(i+1));

    }


return 0;
}
