//컴퓨터에 이상이 생겨 코드만 textfile로 임의로 올립니다. 문제시 재업로드 하겠습니다. 죄송합니다.


#include <stdio.h>
int main(void){

 float kilometer;
 float mile;

 printf("Please ente kilometers:.\n");
 scanf("%f",&kilometer);
 mile = 1.609*kilometer;
 
 printf("%f mile\n", mile);

 return 0;
}