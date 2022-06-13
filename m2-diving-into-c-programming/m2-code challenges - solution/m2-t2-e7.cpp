#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main(){
  printf("Enter the number to check:");
  int num;
  scanf("%d", &num);
  char cnum[10];
  char rcnum[10];
  sprintf(cnum,"%d",num);
  strcpy(rcnum,cnum);
  strrev(rcnum);
  int c1 = atoi(cnum);
  int c2 = atoi(rcnum);
  if (c1 == c2){
    printf("it is a palindrome");
  } else {
    printf("it is not a palindrome");
  }
}
