// 사용자로부터 두 개의 정수를 입력받아서 정수 간의 나눗셈을 실행한다
// 나눗셈을 하기 전에 분모가 0인지를 if 문을 이용하여 검사한다

#include <stdio.h>

int main()
{
    int num1, num2;

    printf("두 개의 정수를 입력하시오(분자, 분모): ");
    scanf("%d %d", &num1, &num2);

    if (num2 == 0)
        printf("error : 분모가 0 입니다.\n");
    else
        printf("%d를 %d로 나눈 몫은 %d입니다.\n", num1, num2, num1/num2);
    
    return 0;
    
}