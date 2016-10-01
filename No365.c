#include <stdio.h>
int main(void){
  int N, a[100000];

  for(i=0;i<N;i++){
    scanf("%d",&a[i]);
  }
  int result = N;
  for(i=N-1;i>=0;i--){
    if(a[i] == result){
      result--;
    }
  }
  printf("%d",result)
  return 0;
}
