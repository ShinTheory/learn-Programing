#include <stdio.h>

int main() {
  int a;

  printf("숫자 입력\n");
  scanf("%d",&a);


  for(int i = a ; i >= 2 ; i--) // i--로 1씩 작아지도록 입력해줍니다.
                                // i = a를 입력해주므로 시작 숫자를 a로 정해줍니다.
    {                           
      if(a % 2 == 0) // 짝수 판별해줍니다.
      {
        printf("%d - %d - %d= %d\n",i-1,i,i+1,i-1-i-i-1); 
        // 두 번째 %d를 i로 입력해줬으므로 %d에 2가 들어가야지만 
        // 마지막 줄 첫 번째 숫자가 0이 나오지않게 됩니다. 
      }
      else // 위 if문이 아닐 경우 즉, 짝수가 아닌 홀수일 때 
      {
        printf("%d + %d + %d= %d\n",i-1,i,i+1, i-1+i+i+1);
      }
    }
  
    
}
