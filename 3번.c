/*

3. 시간을 입력하면 시분초 단위로 구분하여 출력하는 함수 time_division을 작성하고 테스트 하시오.
예를 들어 time_division("3:7:25") 또는 time_division("130725"")의 결과로 "오후 1시 7분 25초"를 출력합니다.

*/

#include <stdio.h>

#include <string.h>

#include <stdlib.h>

 

void time_devision(char *s);

 

int main(void)

{

        char str[50];

        printf("시간을 입력하세요(시분초 각각 두자리 수로 입력):");  // XX:XX:XX 형식으로 하기 위해 

        scanf("%s", str);

        time_devision(str);

        return 0;

}

 

void time_devision(char *s)

{

        int hour, min, sec;

        char AMPM[5];

        char time[50] = { NULL, };

       

        if (strchr(s, ':'))

        {

               if (s[4] == ':') 

               {

                       memmove(s + 4, s + 3, 5); 

                       memmove(s + 3, "0", 1);

               }

        }

        else //:이 없을 경우

        {

               memmove(s + 6, s + 4, 3); 

               memmove(s + 3, s + 2, 2);

               memmove(s + 2, ":", 1);

               memmove(s + 5, ":", 1);

        }

 

        memmove(time, s, 2);

        hour = atoi(time);

        memmove(time, s + 3, 2);

        min = atoi(time);

        memmove(time, s + 6, 2);

        sec = atoi(time);

 

        if (hour > 23 || min > 59 || sec > 59)

        {

               printf("입력에 실패하셨습니다. \n");

               return -1;

        }

 

        if (hour > 12)

        {

               strcpy(AMPM, "오후");

               hour -= 12;

        }

        else

               strcpy(AMPM, "오전");

 

        printf("%s %d시 %d분 %d초\n", AMPM, hour, min, sec);

}
