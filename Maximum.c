#include<stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    int array[x];
    for(int i=0; i<x; i++){
        scanf("%d", &array[i]);
    }
    int max=array[0];
    for(int i=0; i<x; i++){
        if(max<array[i]){
            max=array[i];
        }
    }
    printf("%d", max);

return 0;
}
