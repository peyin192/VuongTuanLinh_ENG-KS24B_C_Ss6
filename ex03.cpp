#include<stdio.h>
int main(){
    int pass= 1234;
    int number;
    do{
        printf("Nhap mat khau gom 4 so: ");
        scanf("%d", &number);
        
        if(number==pass){
            printf("Dung\n");
        }else{
            printf("Sai\n");
        }
    }
	while(number!=pass);
	
    return 0;
}
