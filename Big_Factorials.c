#include<stdio.h>
#define MAX 3000

int main(){
int res[MAX];
res[0]=1;
int res_size=1;

int n;
scanf("%d", &n);

for(int x=2; x<=n; x++){
    int carry=0;

    for(int i=0; i<res_size; i++){
        int prod=res[i]*x+carry;
        res[i]=prod%10;
        carry=prod/10;

    }
    while(carry){
        res[res_size]=carry%10;
        carry=carry/10;
        res_size++;
    }
}

int a[MAX]={0};
if(res_size<=4){
    for(int i=res_size-1; i>=0; i--){
    printf("%d", res[i]);
}
}

else{
    for(int i=res_size-1, j=0; i>=0 && j<=res_size-1; j++, i--){
        a[j]=res[i];
    }
    for(int j=res_size-4; j<=res_size-1; j++){
        printf("%d", a[j]);
    }
}

return 0;
}
