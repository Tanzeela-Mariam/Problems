#include<stdio.h>

int main(){

int a[2][2];
int b[2][2];
int r[2][2];
int sum=0;
int n=0;
int invalid=0;
for(int i=0; i<2&&!invalid; i++){
    for(int j=0; j<2; j++){
        scanf("%d",&n);
        if(n<0||n>100){
            invalid=1;
            break;
        }
        a[i][j]=n;
    }
}
for(int i=0; i<2&&!invalid; i++){
    for(int j=0; j<2; j++){
        scanf("%d",&n);
        if(n<0||n>100){
            invalid=1;
            break;
        }
        b[i][j]=n;
    }
}
for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            sum=0;
            for(int k=0; k<2; k++){
                sum=sum+a[i][k]*b[k][j];
            }
            r[i][j]=sum;

        }

}
if(invalid==0){
for(int i=0; i<2; i++){
    for(int j=0; j<2; j++){
        printf("%d\t", r[i][j]);
    }
    printf("\n");
}
}



return 0;
}
