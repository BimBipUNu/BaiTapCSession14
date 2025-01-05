#include<stdio.h>
#include<string.h>
int main()
{
    char a[]="abc123def4";
    int ans;
    printf("Đếm các kí tự là chữ cái trong chuỗi: %s ",a);scanf("%d",&ans);
    int count=0;
    for(int i=0; i<strlen(a); i++)
    {
        if((a[i]>=65 && a[i]<=90) || (a[i]>=97 && a[i]<=122))
        {
            count++;
        }
    }
    if(ans==count)
    {
        printf("Bạn nhâp đúng số kí tự là chữ trong chuỗi, có %d kí tự là chữ cái",count);
    }else
    {
        printf("Bạn không nhập đúng số kí tự là chữ trong chuỗi, chuỗi có %d từ là chữ cái",count);
    }
}