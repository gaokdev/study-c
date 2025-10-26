// 변수의 초기값 예제

#include <stdio.h>

int main()
{
	int num1, num2, num3;
	int sum = 0; // sum을 0으로 초기화하지 않으면 이상한 값이 나올 수 있음
	
	printf("3개의 정수를 입력하세요 (num1, num2, num3): ");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	sum += num1;
	sum += num2;
	sum += num3;
	
	printf("3개 정수의 합은 %d\n", sum);
	
	return 0;
}