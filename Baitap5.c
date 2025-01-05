//Khai báo và gán giá trị cho 1 chuỗi bất kỳ, viết chương trình yêu cầu người dùng đếm số từ trong chuỗi, mỗi từ sẽ cách nhau bởi dấu cách.
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100]="hello world";
    int choose;
    printf("Nhập số từ có trong câu: %s ",a);scanf("%d",&choose);
    int count=1;
    for(int i=0; i<strlen(a); i++)
    {
        if(a[i]==' ')
        {
            count++;
        }
    }
    if(choose==count)
    {
        printf("Bạn nhâp đúng số từ trong chuỗi có %d từ",count);
    }else
    {
        printf("Bạn không nhập đúng số từ trong chuỗi, chuỗi có %d từ",count);
    }
}