#include <stdio.h>
main(){
  int i, j;
  printf("1에서 9사이의 숫자를 입력하세요\n");
  scanf("%d", &i);

  for(j=1; j<10; j++){
  
  printf("%d * %d + %d\n", i, j, i*j);
  }
}