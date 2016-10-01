#include <stdio.h>
#include <math.h>

int main(){
  long long int N, G, V, num, g;

  scanf("%d %d %d", &N, &G, &V);

  printf("%0.12f\n",((floor(N/5)*G)/V));
  return 0;
}
