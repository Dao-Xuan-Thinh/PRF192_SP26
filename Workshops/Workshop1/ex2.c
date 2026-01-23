#include<stdio.h>


int main() {
	float distant, openfee, wt, price, wp;
	openfee = 12;
	
	printf("Khoang cach: ");
	if (scanf("%f", &distant) != 1){
		printf("\nSo khong hop le");
		return 0;}
		
	printf("Thoi gian: ");
	if (scanf("%f", &wt) != 1){
		printf("\nSo khong hop le");
		return 0;}
	
	//Wait time price
	if (wt>=5)
		wp = (wt-5);
		
	else
		printf("");
	
	//Total price
	if(distant <= 30 && distant > 0.5){
		price = openfee + (distant-0.5)*15 + wp;						// 12 + (*30*-0,5)*15
	}	
	
	else if (distant < 0.5 && distant > 0){
		price = openfee + wp;
	}
	
	else if (distant >= 31){
		price = openfee + (distant-30)*12 + (distant-(distant-30)-0.5)*15 + wp;
	}

	else if (distant <= 0){
		printf("\nSo khong hop le");
		return 0;
	}

	else
		printf(":3");
	
	
	
	printf("\n|%-10s |%-10s |%-10s\n", "Km", "Time", "Tong");
	printf("|%-10.1f |%-10.1f |%-10.3f", distant, wt, price);
	
}
