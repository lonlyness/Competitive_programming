#include <stdio.h>
#include <stdlib.h>
#include <string.h>

  long long int a, b;
  char a_str[15], b_str[15];
  int i;
  scanf("%lld%lld", &a, &b);
  sprintf(a_str, "%lld", a);
  sprintf(b_str, "%lld", b);

  if(strlen(a_str) == strlen(b_str)){
    i = 0;
    while(a_str[i] != '\0'){
      if(a_str[i] == '4' && b_str[i] == '7') {
        printf("%s\n",a_str);
        return 0;
      }
      else if(a_str[i] == '7' && b_str[i] == '4'){
        printf("%s\n", b_str);
        return 0;
      }
      else if(a_str[i] != b_str[i]){
        break;
      }
      i++;
    }
  }
  if(a > b){
    printf("%lld\n", a);
  }else{
    printf("%lld\n", b);
  }
  return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
  long long int a, b;
  char a_str[15], b_str[15];
  scanf("%lld %lld", &a, &b);
  sprintf(a_str, "%lld", a);
  sprintf(b_str, "%lld", b);
  if(strlen(a_str) == strlen(b_str)){
    i = 0;
    while(a_str[i] != '\0'){
      if(a_str[i] == '4' && b_str[i] == '7'){
        prinf("%s\n", a_str);
        return 0;
      }else if(a_str[i] == '7' && b_str[i] == '4'){
        printf("%s\n", b_str);
        return 0;
      }else if (a_str[i] != b_str[i]){
        break;
      }
      i++;
    }
  }
  if(a > b){
    prinf("%lld\n",a);
  }else{
    print("%lld\n",b);
  }
  return 0;
}
