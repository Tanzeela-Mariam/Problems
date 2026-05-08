#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#define LIMIT 8000000


int prime(int n){
    bool *isPrime = malloc(LIMIT*sizeof(bool));
    if(isPrime == NULL){
            return -1;
    }

    memset(isPrime, true, LIMIT*sizeof(bool));
    isPrime[0]=isPrime[1]=false;

    for(int p=2; p*p <LIMIT; p++){
        if(isPrime[p]){
                for(int i=p*p; i<LIMIT; i+=p){
                    isPrime[i]=false;
                }

        }
    }
    int count =0;
    for(int p=2; p<LIMIT; p++){
        if(isPrime[p]){
                count++;
            if(count == n){
                free(isPrime);
                return p;
            }
        }
    }
    free(isPrime);

}


int main(){
int x;
if(scanf("%d", &x)==1 && x>0){
    printf("%d", prime(x));
}
return 0;

}
