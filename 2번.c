/*

2. ������ ���ڿ��� ���� ���ĺ�, ����, Ư����ȣ�� ������ ����ϴ� �Լ��� �ۼ��ϰ� �׽�Ʈ�Ͻÿ�.

*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void howmany();

void main()
{

 char mon[] = "1HelloCworld!!123";
 
  
 printf("����:%s\n",mon);
 
 howmany(mon);
 
   
   system("pause");


}

void howmany(char mon[])
{

 int i=0;
    int alpa=0;
 int giho=0;
 int num=0;

 for(i=0;i<strlen(mon);i++){
  if((mon[i]>=65&&mon[i]<=90)||(mon[i]>=97&&mon[i]<=122))
   alpa++;
  else if(mon[i]>=32&&mon[i]<=47)
   giho++;
  else if(mon[i]>=48&&mon[i]<=57)
            num++;
 }
   
 printf("���ĺ�:%d\n",alpa);
 printf("Ư������:%d\n",giho);
 printf("����:%d\n",num);
 
 
}
