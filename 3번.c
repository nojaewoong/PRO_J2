/*

3. �ð��� �Է��ϸ� �ú��� ������ �����Ͽ� ����ϴ� �Լ� time_division�� �ۼ��ϰ� �׽�Ʈ �Ͻÿ�.
���� ��� time_division("3:7:25") �Ǵ� time_division("130725"")�� ����� "���� 1�� 7�� 25��"�� ����մϴ�.

*/

#include <stdio.h>

#include <string.h>

#include <stdlib.h>

 

void time_devision(char *s);

 

int main(void)

{

        char str[50];

        printf("�ð��� �Է��ϼ���(�ú��� ���� ���ڸ� ���� �Է�):");  // XX:XX:XX �������� �ϱ� ���� 

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

        else //:�� ���� ���

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

               printf("�Է¿� �����ϼ̽��ϴ�. \n");

               return -1;

        }

 

        if (hour > 12)

        {

               strcpy(AMPM, "����");

               hour -= 12;

        }

        else

               strcpy(AMPM, "����");

 

        printf("%s %d�� %d�� %d��\n", AMPM, hour, min, sec);

}
