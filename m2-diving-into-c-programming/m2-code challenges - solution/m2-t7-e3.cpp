#include <stdio.h>
void main(){
  printf("Enter The Number:");
  int d;
  scanf(" %d", &d);
  unsigned long long fibstr[d+1];
  fibstr[0] = 0;
  fibstr[1] = 1;
  for (int i = 2; i < (d + 1); i++) {
    fibstr[i] = (fibstr[i - 1] + fibstr[i - 2]);
  }
  printf("%llu\n", fibstr[d]);
}
