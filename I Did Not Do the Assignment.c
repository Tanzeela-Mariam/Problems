#include<stdio.h>

int main(){
int flag=0;
int n;
scanf("%d", &n);
if(n==1){
 flag++;
}
else if(n==2){
flag=0;
}
else{
    for(int i=2; i*i<=n; i++){
    if(n%i==0){
        flag++;
        break;
    }
}
}
if(flag==0){
    printf("NO PUNISHMENT");
}
if(flag==1){
    for(int i=1; i<=n; i++){
        printf("I DID NOT DO THE ASSIGNMENT.\n");
    }
}




return 0;
}
