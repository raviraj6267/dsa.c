#include<stdio.h>
int main(){
int abc[5][4];
int i, j;
 for(i=0; i<5; i++) {
 for(j=0;j<4;j++) {
  printf("Enter value for abc[%d][%d]:", i, j);
  scanf("%d", &abc[i][j]);
      }
   }
   return 0;
}