//Calls
#include<stdio.h>


//Functions
int Taxi_Fee(float distance){
	float fee = 0;
	if (distance <= 1) {
		fee = 15;
	} 
    else if (distance < 31 && distance > 1) {
		fee = 15 + (distance - 1) * 12;
	} 
    else if (distance > 31) {
        fee = 15 + (distance - (distance - 30) - 1) * 12 + (distance - 30) * 10;
	}
	return fee;
}

//     for(i = 0; 1 > distance; 1 += 0.1){
//         while(i < 1){
//             fee += 15000 / 10;
//             continue; 
//         }
//         while(i > 1 && )


float InputCheck(){
    float check;
    while(scanf("%f", &check) != 1){
        printf("so khong hop le");
        fflush(stdin);
    }
    return check;
}

//Codes
int main(){
    float distance, total;
    printf("Nhap khoang cach : ");
    distance = InputCheck();
    total = Taxi_Fee(distance);
    printf("Tong so tien la: %.2fk", total);
    return 0;
}