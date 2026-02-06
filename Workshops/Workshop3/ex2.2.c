#include<stdio.h>

int main(){
    int n, sum = 0;
    
    do{
    	while(1){
		printf("Nhap cac so can tinh tong | Nhap 0 de ket thuc\n>");
	    	while(scanf("%d", &n) != 1){
	    		if(n = 0){
				printf("\nNhap so khac 0\n");
				}
				
				else{
	    		printf("\nNhap sai\n");
	    		fflush(stdin);
				}
			}
			
    	sum += n;
    	printf("Tong hien tai: %d || So hien tai: %d\n", sum, n);
		}
	}
	
    while(n > 0);
    	

    printf("Tong cua cac so la: %d", sum);
    return 0;
}