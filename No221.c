#include <stdio.h>
int main(void){
  float a;
  scanf("%f", &a);
  int mafia = a * 100;
  int citizen = 1000000 - mafia;
  double arrested_mafia = mafia * 0.99;
  double arrested_citizen = citizen * 0.01;
  double ans = arrested_citizen /(arrested_mafia + arrested_citizen) * 100;

  printf("%.12f",ans);

  return 0;
}
