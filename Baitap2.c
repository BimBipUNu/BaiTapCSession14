//Khai báo và gán giá trị cho 1 chuỗi bất kỳ, in ra từng ký tự trong chuỗi đã khai báo, mỗi ký tự cách nhau 1 dấu cách.
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100] = "PTIT";
    for(int i =0; i<strlen(a); i++)
    {
        printf("%c ",a[i]);
    }
}