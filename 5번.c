/*

5.입력한 금액에 대해 화폐 단위별로 개수를 출력하는 함수를 작성하고 테스트하시오.

*/

#include <stdio.h>

#include <math.h>

 

void ShowMoney(int money)

{

       printf("5만원권:%d, 1만원권:%d, 5천원권:%d, 1천원권:%d", money / 50000, money % 50000 / 10000, money % 10000 / 5000, money % 5000 / 1000);

        printf(" 500원:%d, 100원:%d, 50원:%d, 10원:%d\n", money % 1000 / 500, money % 500 / 100, money % 100 / 50, money % 50 / 10);

}

 

int main(void)

{

        int money;

        printf("잔금 입력:");

        scanf("%d", &money);

        ShowMoney(money);

        return 0;

}
