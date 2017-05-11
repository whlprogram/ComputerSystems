#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>//整数类型类
#include <malloc.h>
typedef unsigned char *byte_pointer;
void show_bytes(byte_pointer start, int len) {
    int i;
    //for (i = 0; i < len; i++)//小端法端法
    for (i = len - 1; i >= 0; i--)//大端法
        printf(" %.2x", start[i]);	printf("\n");
}
int main()
{
    //intN_t N位有符号整数
    //uintN_t N位无符号整数
    //N允许为8, 16, 32, 64
    int8_t  int_8  = 8; //8位有符号整数变量
    uint32_t uint_32 = 8; //32位无符号整数变量
    int32_t int_32 = -8; //32位有符号整数变量

    int64_t  intMAX64 = INT64_MAX; //宏 每个N对应最大最小值
    int64_t  intMIN64 = INT64_MIN; //64位最小值
    uint64_t uintMAX64 = UINT64_MAX;
    //确定宽度类型的带格式打印需要使用宏 int32_t可使用宏PRId32  uint64_t可使用宏PRIu64
    //printf("x=%"PRId32", y=%"PRIu64"\n", uint_32, intMAX64);
    //编译为64位程序时 宏PRId32展开成字符串"d"  宏PRIu64展开成字符串"l"和"u" 如下
    printf("x=%d, y=%lu\n", int_32, uintMAX64);

    short x = 12345;//十六进制表示 0x3039
    short mx = -x;
    //大端法答案 30 39\n cf c7 小端法答案 39 30\n c7 cf
    show_bytes((byte_pointer) &x, sizeof(short));// 30 39
    show_bytes((byte_pointer) &mx, sizeof(short));// cf c7

    printf("Hello world!\n");
    return 0;
}
