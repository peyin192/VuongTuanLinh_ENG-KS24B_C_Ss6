#include<stdio.h>
int main(){
    int n, number1=0, number2=1, number;
    
    printf("nhap vao 1 so nguyen n bat ky ");
    scanf("%d", &n);
    
    if(n==1){
        printf("1\n");
    }else if(n==2){
        printf("1\n1\n");
    }else{
        printf("1\n");
        for(int i=1; i<=(n-1);i++){
            number=number1+number2;
            printf("%d\n", number);
            number1=number2;
            number2=number;
        }
    }
    return 0;
}
