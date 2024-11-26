#include <stdio.h>
#include <math.h>

int main() {
    float a,b,c,delta,num1,num2;

    printf("Nhap vao he so a: ");
    scanf("%f", &a);
    
    printf("Nhap vao he so b: ");
    scanf("%f", &b);
    
    printf("Nhap vao he so c: ");
    scanf("%f", &c);

    if (a == 0) {
        printf("Sai\n");
    } else {
        delta = b * b - 4 * a * c;

        if (delta > 0) {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co hai nghiem phan biet: x1 = %.2f, x2 = %.2f\n",num1,num2);
        } else if (delta == 0) {
            x1 = -b / (2 * a);
            printf("Phuong trinh co mot nghiem kep: x1 = %.2f\n",num1);
        } else {
            printf("Phuong trinh vo nghiem\n");
        }
    }

    return 0;
}
