#include <stdio.h>
#include <math.h>
#define EPS 0.0000001
int main(){
  int t;
  double v;
  double ans,ans2;
  long int a;
  scanf("%lf %d",&v,&t);

  ans=v*t+EPS;
  a=(long int)ans;
  printf("%ld\n",a);
  return 0;
}
