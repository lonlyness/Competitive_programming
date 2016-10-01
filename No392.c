#include <stdio.h>
int main(void){
  int m, a;
  char s[15];
  int i, k, j;
  scanf("%d", &m);
  for(i=0;i<m;i++){
    scanf("%d", &a);
    k=0;
    while(a > 0){
      if(a%2 == 0){
        s[k] = 'R';
      }else{
        s[k] = 'L';
      }
      a = (a-1)/2;
      k++;
    }
    for(j=k-1;j>=0;j--){
      printf("%c",s[j]);
    }
    printf("\n");
  }
  return 0;
}
