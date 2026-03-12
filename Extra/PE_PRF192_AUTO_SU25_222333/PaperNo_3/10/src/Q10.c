#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
//@STUDENT:ADD YOUR CODE FOR DEFINE POINT STRUCT HERE:
typedef struct {
	int x, y;
} Point;

int main() {
  system("cls");
	printf("\nINPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	Point points[5];
	for(int i = 0; i < 5; i++){
		scanf("%d %d", &points[i].x, &points[i].y);
	}



  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: ADD YOUR CODE FOR OUTPUT HERE:
	double maxDist = -1;
	Point farthest;
	
	for(int i = 0; i < 5; i++){
		double dist = sqrt(points[i].x * points[i].y + points[i].y * points[i].x);
		if(dist  > maxDist){
			maxDist = dist;
			farthest = points[i];
		}
	}
	printf("(%d,%d)", farthest.x, farthest.y);
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
