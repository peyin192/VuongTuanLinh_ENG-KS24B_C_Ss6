#include <stdio.h>
int main(){
	int num1,num2,num3,num4,num5,a=0,b=0;
	
	printf("Nhap 5 so nguyen\n");
	
	printf("Nhap so thu nhat: ");
	scanf("%d",&num1);
	if(num1%2!=0){
		a = a + 1;
	}
	else{
		b = b + 1;
	}
	
	
	printf("Nhap so thu 2: ");
	scanf("%d",&num2);
	if(num2%2!=0){
		a = a + 1;
	}
	else{
		b =  b + 1;
	}
	
	printf("Nhap so thu 3: ");
	scanf("%d",&num3);
	if(num3%2!=0){
		a = a + 1;
	}
	else{
		b = b + 1;
	}
	
	printf("Nhap so thu 4: ");
	scanf("%d",&num4);
	if(num4%2!=0){
		a = a + 1;
	}
	else{
		b = b + 1;
	}
	
	printf("Nhap so thu 5: ");
	scanf("%d",&num5);
	if(num5%2!=0){
		a = a + 1;
	}
	else{
		b = b + 1;
	}
	
	printf("Tong cac so le la: %d\n",a);
	printf("Tong cac so chan la: %d",b);

	
	return 0;
	
}
