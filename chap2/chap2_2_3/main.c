#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>//����������
#include <malloc.h>
typedef unsigned char *byte_pointer;
void show_bytes(byte_pointer start, int len) {
    int i;
    //for (i = 0; i < len; i++)//С�˷��˷�
    for (i = len - 1; i >= 0; i--)//��˷�
        printf(" %.2x", start[i]);	printf("\n");
}
int main()
{
    //intN_t Nλ�з�������
    //uintN_t Nλ�޷�������
    //N����Ϊ8, 16, 32, 64
    int8_t  int_8  = 8; //8λ�з�����������
    uint32_t uint_32 = 8; //32λ�޷�����������
    int32_t int_32 = -8; //32λ�з�����������

    int64_t  intMAX64 = INT64_MAX; //�� ÿ��N��Ӧ�����Сֵ
    int64_t  intMIN64 = INT64_MIN; //64λ��Сֵ
    uint64_t uintMAX64 = UINT64_MAX;
    //ȷ��������͵Ĵ���ʽ��ӡ��Ҫʹ�ú� int32_t��ʹ�ú�PRId32  uint64_t��ʹ�ú�PRIu64
    //printf("x=%"PRId32", y=%"PRIu64"\n", uint_32, intMAX64);
    //����Ϊ64λ����ʱ ��PRId32չ�����ַ���"d"  ��PRIu64չ�����ַ���"l"��"u" ����
    printf("x=%d, y=%lu\n", int_32, uintMAX64);

    short x = 12345;//ʮ�����Ʊ�ʾ 0x3039
    short mx = -x;
    //��˷��� 30 39\n cf c7 С�˷��� 39 30\n c7 cf
    show_bytes((byte_pointer) &x, sizeof(short));// 30 39
    show_bytes((byte_pointer) &mx, sizeof(short));// cf c7

    printf("Hello world!\n");
    return 0;
}
