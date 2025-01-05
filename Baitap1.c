//Viết chương trình yêu cầu người dùng nhập vào một chuỗi bất kỳ, in ra chuỗi vừa nhập và độ dài chuỗi đó.
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    printf("Nhập một chuỗi bất kì: ");scanf("%s",&a);//fgets(a,100,stdin);fflush(stdin);
    printf("%s\n",a);
    printf("Chuỗi có độ dài là: %d",strlen(a));
}