/*


6. 주민등록번호의 생년월일 부분에 대해 연월일을 구분하여 출력하는 함수 birthday를 작성하고 테스트하시오.
예를 들어 birthday(990312)의 결과로 "1999년 3월 12일"을 출력합니다.

*/

#include <stdio.h>

#include <stdlib.h>

 

void birthday(int number)

{

        //앞서 푼 화폐 문제와 비슷하다

        int year = number / 10000;

        int month = number % 10000 / 100;

        int day = number % 100;

        if (year > 17)

               printf("19%d년 %d월 %d일\n", year, month, day);

        else if (year > 0 && year < 10)

               printf("200%d년 %d월 %d일\n", year, month, day);

        else if (year >= 10 && year <= 17)

               printf("20%d년 %d월 %d일\n", year, month, day);

}

 

int main(void)

{

        int number;

        while (1) 

        {

               printf("생년월일을 입력하시오(ex-000203):");

               scanf("%d", &number);

               birthday(number);

        }

        return 0;

}
