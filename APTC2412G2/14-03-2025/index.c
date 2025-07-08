#include <stdio.h>

void recursive(int n){ //đệ quy
   if(n > 0){
      printf("%d ", n);
      recursive(n - 1);
   }
}

int main(){
   recursive(10);
   return 0;
}