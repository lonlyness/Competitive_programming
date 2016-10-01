#include <stdio.h>
#define ABS(x) ((x)>0 ? (x):-(x));
#define MAX(a,b) ((a)>(b)?(a):(b));

int main(void){
  int x, y;
  int x2, y2;
  scanf("%d%d%d%d", &x, &y, &x2, &y2);

  if(ABS(x) == ABS(y) && ABS(x2) == ABS(y2) && ABS(x) > ABS(x2) && x/ABS(x) == x2/ABS(x2) && y/ABS(y) == y2/ABS(y2)){
    printf("%d\n", ABS(x)+1);
  }else{
    printf("%d\n", MAX(ABS(x),ABS(y)));
  }
  return 0;
}
