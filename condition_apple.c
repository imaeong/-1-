#include <stdio.h>
main(){
  int x;

  printf("당신이 좋아하는 과일은 무엇인가요? 아래의 번호를 선택해주세요.\n");
  printf("1번 사과, 2번 딸기, 3번 샤인머스켓, 4번 망고, 5번 모두 좋아하지 않는다\n");

  printf("선택한 번호를 입려해주세요:");
  scanf("%d", &x);

  switch(x){
  case 1:
    printf("사과를 좋아하는군요!\n");
    break;
  case 2:
    printf("딸기를 좋아하는군요!\n");
    break;
  case 3:
    printf("샤인머스켓을 좋아하는군요!\n");
    break;
  case 4:
    printf("망고를 좋아하는군요!\n");
    break;
  default:
    printf("당신은 과일을 좋아하지 않는군요...\n");
    break;
}}