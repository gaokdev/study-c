// 화씨 온도를 섭씨로 바꾸는 프로그램

#include <stdio.h>

int main()
{
	double f_temp;
	double c_temp;
	
    float a = 0.7;
    printf("%d \n", a == 0.7);

	printf("화씨온도를 입력하시오: ");
	scanf("%lf", &f_temp);
	
	c_temp = (5.0/9.0)*(f_temp-32); // 정수 나눗셈을 했기 때문에 원하는 값이 나오지 않아 실수 나눗셈임을 명시. (double)을 붙이는 방법도 가능
	printf("섭씨온도는 %f입니다. \n", c_temp);
	

	return 0;
}