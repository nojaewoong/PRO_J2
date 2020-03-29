/*

7. 세계 주요 도시의 현재 시간을 출력하는 프로그램을 작성하시오. 아래에는 우리나라를 기준으로 하는 세계 주요 도시의 시차를 나타냅니다.
그리니치 런던 로마 파리 방콕 홍콩 베이징 서울 동경 시드니 멜버른 로스앤젤레스 뉴욕
-09:00 -08:00 -02:00 -01:00 00:00 +02:00 -17:00 -14:00

*/

#include <stdio.h>

#include <time.h>

 

void Seoul(void)

{

        int year, month, day, hour, min, sec;

        time_t curr;

        struct tm *d;

        curr = time(NULL);

        d = localtime(&curr);

 

        year = d->tm_year + 1900;

        month = d->tm_mon + 1;

        day = d->tm_mday;

        hour = d->tm_hour;

        min = d->tm_min;

        sec = d->tm_sec;

 

        printf("%d년 %d월 %d일 서울, 동경의 현재 시각은 %d시 %d분 %d초입니다\n", year, month, day, hour, min, sec);

}

 

void London(void)

{

        int year, month, day, hour, min, sec;

        time_t curr;

        struct tm *d;

        curr = time(NULL);

        d = localtime(&curr);

 

        year = d->tm_year + 1900;

        month = d->tm_mon + 1;

        day = d->tm_mday;

        hour = d->tm_hour-9;

        if (hour <= 0) 

        {

               hour = 24 + hour;

               day = day - 1;

        }

        min = d->tm_min;

        sec = d->tm_sec;

 

        printf("%d년 %d월 %d일 런던의 현재 시각은 %d시 %d분 %d초입니다\n", year, month, day, hour, min, sec);

}

 

void Paris(void)

{

        int year, month, day, hour, min, sec;

        time_t curr;

        struct tm *d;

        curr = time(NULL);

        d = localtime(&curr);

 

        year = d->tm_year + 1900;

        month = d->tm_mon + 1;

        day = d->tm_mday;

        hour = d->tm_hour - 8;

        if (hour <= 0)

        {

               hour = 24 + hour;

               day = day - 1;

        }

        min = d->tm_min;

        sec = d->tm_sec;

 

        printf("%d년 %d월 %d일 로마, 파리의 현재 시각은 %d시 %d분 %d초입니다\n", year, month, day, hour, min, sec);

}

 

void Bangkok(void)

{

        int year, month, day, hour, min, sec;

        time_t curr;

        struct tm *d;

        curr = time(NULL);

        d = localtime(&curr);

 

        year = d->tm_year + 1900;

        month = d->tm_mon + 1;

        day = d->tm_mday;

        hour = d->tm_hour-2;

        if (hour <= 0)

        {

               hour = 24 + hour;

               day = day - 1;

        }

        min = d->tm_min;

        sec = d->tm_sec;

 

        printf("%d년 %d월 %d일 방콕의 현재 시각은 %d시 %d분 %d초입니다\n", year, month, day, hour, min, sec);

}

 

void Hongkong(void)

{

        int year, month, day, hour, min, sec;

        time_t curr;

        struct tm *d;

        curr = time(NULL);

        d = localtime(&curr);

 

        year = d->tm_year + 1900;

        month = d->tm_mon + 1;

        day = d->tm_mday;

        hour = d->tm_hour-1;

        if (hour <= 0)

        {

               hour = 24 + hour;

               day = day - 1;

        }

        min = d->tm_min;

        sec = d->tm_sec;

 

        printf("%d년 %d월 %d일 홍콩, 베이징의 현재 시각은 %d시 %d분 %d초입니다\n", year, month, day, hour, min, sec);

}

 

void Sydney(void)

{

        int year, month, day, hour, min, sec;

        time_t curr;

        struct tm *d;

        curr = time(NULL);

        d = localtime(&curr);

 

        year = d->tm_year + 1900;

        month = d->tm_mon + 1;

        day = d->tm_mday;

        hour = d->tm_hour+2;

        if (hour > 24) 

        {

               hour = hour - 24;

               day = day + 1;

        }

        min = d->tm_min;

        sec = d->tm_sec;

 

        printf("%d년 %d월 %d일 시드니, 멜버른의 현재 시각은 %d시 %d분 %d초입니다\n", year, month, day, hour, min, sec);

}

 

void LosAngeles(void)

{

        int year, month, day, hour, min, sec;

        time_t curr;

        struct tm *d;

        curr = time(NULL);

        d = localtime(&curr);

 

        year = d->tm_year + 1900;

        month = d->tm_mon + 1;

        day = d->tm_mday;

        hour = d->tm_hour-17;

        if (hour <= 0)

        {

               hour = 24 + hour;

               day = day - 1;

        }

        min = d->tm_min;

        sec = d->tm_sec;

 

        printf("%d년 %d월 %d일 엘에이의 현재 시각은 %d시 %d분 %d초입니다\n", year, month, day, hour, min, sec);

}

 

void NewYork(void)

{

        int year, month, day, hour, min, sec;

        time_t curr;

        struct tm *d;

        curr = time(NULL);

        d = localtime(&curr);

 

        year = d->tm_year + 1900;

        month = d->tm_mon + 1;

        day = d->tm_mday;

        hour = d->tm_hour-14;

        if (hour <= 0)

        {

               hour = 24 + hour;

               day = day - 1;

        }

        min = d->tm_min;

        sec = d->tm_sec;

 

        printf("%d년 %d월 %d일 뉴욕의 현재 시각은 %d시 %d분 %d초입니다\n", year, month, day, hour, min, sec);

}

 

int main(void)

{

        printf("세계 주요도시의 현재 시간\n");

        London();

        Paris();

        Bangkok();

        Hongkong();

        Seoul();

        Sydney();

        LosAngeles();

        NewYork();

        return 0;

}
