/*

5.�Է��� �ݾ׿� ���� ȭ�� �������� ������ ����ϴ� �Լ��� �ۼ��ϰ� �׽�Ʈ�Ͻÿ�.

*/

#include <stdio.h>

#include <math.h>

 

void ShowMoney(int money)

{

       printf("5������:%d, 1������:%d, 5õ����:%d, 1õ����:%d", money / 50000, money % 50000 / 10000, money % 10000 / 5000, money % 5000 / 1000);

        printf(" 500��:%d, 100��:%d, 50��:%d, 10��:%d\n", money % 1000 / 500, money % 500 / 100, money % 100 / 50, money % 50 / 10);

}

 

int main(void)

{

        int money;

        printf("�ܱ� �Է�:");

        scanf("%d", &money);

        ShowMoney(money);

        return 0;

}
