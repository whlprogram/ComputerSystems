#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tx, ty = 54321;
    unsigned ux = 12345u, uy;
    //显示 强制类型转换
    tx = (int)ux;
    uy = (unsigned)ty;
    printf("tx=%d , uy=%u\n", tx, uy);//tx=12345 , uy=54321
    //隐示 强制类型转换
    tx = ux;
    uy = ty;
    printf("tx=%d , uy=%u\n", tx, uy);//tx=12345 , uy=54321

    //%d表示有符号十进制 %u表示无符号十进制 %x表示十六进制
    int x = -1;
    unsigned u = 2147483648;//2的31次方    2 to the 31st
    printf("x= %u = %d\n", x, x);// x = 4294967295 = -1
    printf("u= %u = %d\n", u, u);// u = 2147483648 = -2147483648

    printf("Hello world!\n");
    return 0;
}
