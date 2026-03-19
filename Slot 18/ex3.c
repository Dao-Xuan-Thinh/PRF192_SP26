#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

typedef struct{
  int x;
  int y;
}Point;

void nhapDiem(Point* a, int i){
  scanf("%d%d", &a[i].x, &a[i].y);
}

void inDiem(Point* a, int i){
  printf("%d", a[i].y);
}

int main() {
  system("cls");
  printf("INPUT:\n");
  
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
  int n;
  scanf("%d", &n);
  Point a[n];
  
  for(int i = 0; i < n; i++){
    nhapDiem(a, i);
  }
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  
  //@STUDENT: WRITE YOUR OUTPUT HERE:
 
  
  for(int i = 0; i < n; i++){
    if(a[i].y > a[i].x){
      inDiem(a, i);
    }
  }
 
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
