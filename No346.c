#include <stdio.h>
#include <string.h>

int main(void){
  char c[100001];
  long long int length, count;
  int i,ans;
  scanf("%s",c);
  length = (int)strlen(c);

  for(i=length-1;i>=0;i--){
    if(c[i] == "w"){
      count++;
    }else if(c[i] == "c" ){
      if(count >= 2){
        ans = ((count-1)*count))/2;
      }
    }
  }
  return 0;
}
