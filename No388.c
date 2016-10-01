#include <stdio.h>
int main(){
  int S,F;
  scanf("%d %d",&S,&F);

  int a = S % F;

  printf("%d",a+1);

  return 0;  
}
