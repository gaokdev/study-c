// 언더플로우 예제

#include <stdio.h>

int main()
{
    float x = 1.23456e-38;
    float y = 1.23456e-40;
    float z = 1.23456e-46; // 언더플로우

    printf("x = %e\n",x);
    printf("y = %e\n",y);
    printf("z = %e\n",z);
    
    return 0;
}