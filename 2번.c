/*

2. 임의의 문자열에 대해 알파벳, 숫자, 특수기호의 개수를 출력하는 함수를 작성하고 테스트하시오.

*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void howmany();

void main()
{

 char mon[] = "1HelloCworld!!123";
 
  
 printf("문장:%s\n",mon);
 
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
   
 printf("알파벳:%d\n",alpa);
 printf("특수문자:%d\n",giho);
 printf("숫자:%d\n",num);
 
 
}
