/*

4. �޴�����ȣ�� �Է��ϸ� ������ ���� �������� ����ϴ� �Լ� phone_divisoin�� �ۼ��ϰ� �׽�Ʈ�Ͻÿ�.
phone_division("0104135555") "010-413-5555"
phone_division("01074135555 "010-7413-5555"

*/

#include <stdio.h>

#include <string.h>

 

void phone_division(char *s);

 

int main(void)

{

        char str[50];

        printf("�޴�����ȣ�� �Է��ϼ���:");

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

               printf("�Է¿� �����ϼ̽��ϴ�.\n");

               return;

        }

}
