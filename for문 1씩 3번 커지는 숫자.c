#include <stdio.h>

int main() {
  int a;

  printf("숫자 입력");
  scanf("%d",&a);

  for(int i=1 ; i <= a ;i++) // a 입력 값까지만 출력될 수 있게 i <= a 를 입력합니다.
    {                        // 1부터 시작하여 a 입력 값까지 1씩 커지도록 i++ 를 입력합니다.
      printf("%d %d %d\n", i , i+1 , i+2); //숫자가 1씩 커지도록 +1,+2 를 입력합니다.
    }
    
}
