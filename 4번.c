/*

4. 휴대폰번호를 입력하면 다음과 같은 형식으로 출력하는 함수 phone_divisoin을 작성하고 테스트하시오.
phone_division("0104135555") "010-413-5555"
phone_division("01074135555 "010-7413-5555"

*/

#include <stdio.h>

#include <string.h>

 

void phone_division(char *s);

 

int main(void)

{

        char str[50];

        printf("휴대폰번호를 입력하세요:");

        scanf("%s", str);

        phone_division(str);

        return 0;

}

 

void phone_division(char *s)

{

        char phone[50] = { NULL };

        int length = strlen(s);

        if (length == 10)

        {

               memmove(phone, s, 3);

               printf("%s-", phone);

               memmove(phone, s + 3, 3);

               printf("%s-", phone);

               memmove(phone, s + 6, 4);

               printf("%s\n", phone);

        }

        else if(length==11)

        {

               memmove(phone, s, 3);

               printf("%s-", phone);

               memmove(phone, s + 3, 4);

               printf("%s-", phone);

               memmove(phone, s + 7, 4);

               printf("%s\n", phone);

        }

        else

        {

               printf("입력에 실패하셨습니다.\n");

               return;

        }

}
