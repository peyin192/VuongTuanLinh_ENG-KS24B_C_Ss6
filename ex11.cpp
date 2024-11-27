#include<stdio.h>
int main(){
    int number=0, count=0, n, prime=2;
    printf("moi ban nhap vao so nguyen bat ky ");
    scanf("%d", &n);
    while(number<n){
        count=0;
        for(int i=1; i<=prime; i++){
            if(prime%i==0){
                count++;
            }
        }
        if(count==2){
            printf("so nguyen to %d\n", prime);
            number++;
        }
        prime++;
    }
    
    
    return 0;
}
