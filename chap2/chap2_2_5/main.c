#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tx, ty = 54321;
    unsigned ux = 12345u, uy;
    //��ʾ ǿ������ת��
    tx = (int)ux;
    uy = (unsigned)ty;
    printf("tx=%d , uy=%u\n", tx, uy);//tx=12345 , uy=54321
    //��ʾ ǿ������ת��
    tx = ux;
    uy = ty;
    printf("tx=%d , uy=%u\n", tx, uy);//tx=12345 , uy=54321

    //%d��ʾ�з���ʮ���� %u��ʾ�޷���ʮ���� %x��ʾʮ������
    int x = -1;
    unsigned u = 2147483648;//2��31�η�    2 to the 31st
    printf("x= %u = %d\n", x, x);// x = 4294967295 = -1
    printf("u= %u = %d\n", u, u);// u = 2147483648 = -2147483648

    printf("Hello world!\n");
    return 0;
}
