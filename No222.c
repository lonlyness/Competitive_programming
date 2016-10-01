#include <stdio.h>
int main (void){
  int a, b;
  char c[2];
  scanf("%d%c%d", &a,&c,&b);
  if(c[0] == '+'){
    printf("%d", a-b);
  }else{
    printf("%d", a+b);
  }
  return 0;
}
