#include<stdio.h>

int main() {
	const float PI=3.14;
	float bankinh=5.0;
	
    float C=2*PI*bankinh;
    float S=PI*bankinh*bankinh;
    
    printf("Chu vi cua hinh tron la: %f\n",C);
    printf("Dien tich cua hinh tron la: %f\n",S);
    
    return 0;
}
