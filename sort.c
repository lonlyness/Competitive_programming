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
