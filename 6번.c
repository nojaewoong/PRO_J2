/*


6. �ֹε�Ϲ�ȣ�� ������� �κп� ���� �������� �����Ͽ� ����ϴ� �Լ� birthday�� �ۼ��ϰ� �׽�Ʈ�Ͻÿ�.
���� ��� birthday(990312)�� ����� "1999�� 3�� 12��"�� ����մϴ�.

*/

#include <stdio.h>

#include <stdlib.h>

 

void birthday(int number)

{

        //�ռ� Ǭ ȭ�� ������ ����ϴ�

        int year = number / 10000;

        int month = number % 10000 / 100;

        int day = number % 100;

        if (year > 17)

               printf("19%d�� %d�� %d��\n", year, month, day);

        else if (year > 0 && year < 10)

               printf("200%d�� %d�� %d��\n", year, month, day);

        else if (year >= 10 && year <= 17)

               printf("20%d�� %d�� %d��\n", year, month, day);

}

 

int main(void)

{

        int number;

        while (1) 

        {

               printf("��������� �Է��Ͻÿ�(ex-000203):");

               scanf("%d", &number);

               birthday(number);

        }

        return 0;

}
