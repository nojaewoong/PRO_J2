/*

1. 임의의 영문 문자열에 대해 소문자는 대문자로, 대문자는 소문자로 동시에 변환하는 함수를 작성하고 테스트하시요.

*/


#include <stdio.h>

#include <ctype.h> 

#include <string.h>

 

void change(char str[]);

 

int main(void)

{

        char string[20];

        printf("열 입력:");

        scanf("%s", string);

        printf("열 변환:");

        change(string);

        printf("변 문자열:%s\n", string);

        return 0;

}

 

void change(char str[])

{

        int i;

        int length = strlen(str);

        for (i = 0; i < length; i++)

        {

               if (str[i] >= 65 && str[i] <= 90) //대문자

                       str[i] = tolower(str[i]);

               else if (str[i] >= 97 && str[i] <= 122) //소문자

                       str[i] = toupper(str[i]);
 
        }

}
