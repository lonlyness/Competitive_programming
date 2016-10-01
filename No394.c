#include <stdio.h>

void sort(int ten[]){
  int i, j, temp;

  for(i=0;i<6;i++){
    for(j=5;j>i;j--){
      if(ten[i]>ten[j]){
        temp =ten[j];
        ten[j] = ten[i];
        ten[i] = temp;
      }
    }
  }
}

int main(){

  for(i=0;i<6;i++){
    scanf("%d",&ten[i]);
  }
  sort(ten);

  int j=1,sum;

  for(i=0;i<4;i++){
      sum += ten[j++];
  }

  double ans = sum / 4;
  printf("%.2f",ans);

  return 0;
}
