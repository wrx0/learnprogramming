#include <iostream>
using namespace std;


//打印int, short, long, unsigned int, unsigned short, unsigned long, float, double, uint8_t, uint16_t, uint32_t, uint64_t的大小
int t_basic_types(){
    printf("sizeof(int),            %d\n", sizeof(int));
    printf("sizeof(short),          %d\n", sizeof(short));
    printf("sizeof(long),           %d\n", sizeof(long));
    printf("sizeof(unsigned int),   %d\n", sizeof(unsigned int));
    printf("sizeof(unsigned short), %d\n", sizeof(unsigned short));
    printf("sizeof(unsigned long)   %d\n", sizeof(unsigned long));
    printf("sizeof(float),          %d\n", sizeof(float));
    printf("sizeof(double),         %d\n", sizeof(double));

    printf("sizeof(uint8_t),        %d\n", sizeof(uint8_t));
    printf("sizeof(uint16_t,        %d\n", sizeof(uint16_t));
    printf("sizeof(uint32_t,        %d\n", sizeof(uint32_t));
    printf("sizeof(uint64_t),       %d\n", sizeof(uint64_t));

    return 0;
}

int main() {
    //基本用法：测试和练习程序放在外面的函数，main中直接调用即可。清晰且可反复使用
    t_basic_types();
}
