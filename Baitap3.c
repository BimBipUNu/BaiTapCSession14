//Khai báo và gán giá trị cho 1 chuỗi bất kỳ, viết chương trình in ra chuỗi đảo ngược của chuỗi đã khai báo.
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100] = "PTIT";
    for(int i =strlen(a); i>=0; i--)
    {
        printf("%c",a[i]);
    }
}