/*


8. n분 후 또는 n초 후에 알람이 울리는 타이머(timer) 함수를 작성하시오. 알람소리의
출력은 확장 문자열(escape sequence)을 이용하여 printf("\a");로 나타냅니다.

*/

#include <stdio.h>

#include <time.h>

#include <Windows.h> 

 

void alarm(int sec)

{

        Sleep(sec*1000);

        printf("\a");

}

 

int main(void)

{

        int sel;

        int min, sec;

        printf("1:n분 후 알람\t2:n초 후 알람:");

        scanf("%d", &sel);

        switch (sel)

        {

        case 1:

               printf("몇 분 후 알람이 울리도록 하시겠습니까?");

               scanf("%d", &min);

               min *= 60; 

               alarm(min);

               break;

        case 2:

               printf("몇 초 후 알람이 울리도록 하시겠습니까?");

               scanf("%d", &sec);

               alarm(sec);

               break;

        }

        return 0;

}
