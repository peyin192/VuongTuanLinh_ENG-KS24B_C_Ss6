#include <stdio.h>
int main(){
	int num1,num2,num3,num4,num5,sum,nume1,nume2,nume3,nume4,nume5;
	
	printf("Nhap 5 so nguyen\n");
	
	printf("Nhap so thu nhat: ");
	scanf("%d",&num1);
	if(num1%2!=0){
		nume1 = num1;
	}
	
	
	printf("Nhap so thu 2: ");
	scanf("%d",&num2);
	if(num2%2!=0){
		nume2 = num2;
	}
	
	printf("Nhap so thu 3: ");
	scanf("%d",&num3);
	if(num3%2!=0){
		nume3 = num3;
	}
	
	printf("Nhap so thu 4: ");
	scanf("%d",&num4);
	if(num4%2!=0){
		nume4 = num4;
	}
	
	printf("Nhap so thu 5: ");
	scanf("%d",&num5);
	if(num5%2!=0){
		nume5 = num5;
	}
	
	sum = nume1 + nume2 + nume3 + nume4 + nume5;
	printf("Tong cac so le la: %d",sum);
	
	return 0;
	
}
