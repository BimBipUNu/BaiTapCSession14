/*Khai báo và gán giá trị cho 1 chuỗi bất kỳ, viết chương trình yêu cầu người dùng nhập vào 1 ký tự bất kỳ,
in ra số lần xuất hiện của ký tự đó trong chuỗi đã khai báo.*/
#include<stdio.h>
#include<string.h>
int main()
{
    char a[23]="abcdefghijklmnopqrstuv";
    char x;
    int count=0;
    printf("Nhập một kí tự bất kì: ");scanf("%c",&x);
    for(int i=0; i<strlen(a); i++)
    {
        if(a[i]==x)
        {
            count++;
        }
    }
    printf("%c xuất hiện %d lần trong chuỗi",x,count);
}