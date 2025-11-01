// 사용자로부터 키를 입력받아서 표준 체중을 계산한 후에 사용자의 체중과 비교하여 저체중인지, 표준인지, 과체중인지를 판단하는 프로그램
// 표준 체중 = (키 - 100) * 0.9

#include <stdio.h>
#include <math.h> // fabs()함수를 사용하기 위해 포함시킨 헤더파일

int main()
{
    double height;
    double weight;
    double average_weight;
    const double EPSILON = 1e-9; // 기호상수로 입실론 선언
    char range = 0;
    double diff;

    printf("키와 체중을 입력하시오: ");
    scanf("%lf %lf", &height, &weight);

    average_weight = (height - 100.0) * 0.9;

    printf("표준체중은 %.2fkg 입니다.\n", average_weight);

    if (weight > average_weight) {
        printf("과체중 입니다.\n");
        range = 'o';
    }
    else if (weight < average_weight) {
        printf("저체중 입니다.\n");
        range = 'u';
    }
    else if (fabs(weight - average_weight) < EPSILON) { // 연산 결과로 나온 double 형과 같은지 판단할때는 항상 입실론을 사용해주기!!!!!!!!!!!!!!!
        printf("표준체중 입니다.\n");
        range = 'a';
    }
    
    diff = fabs(weight - average_weight);

    switch (range) {
        case 'u':
            printf("표준체중이 되려면 %.2fkg 만큼 찌워야 합니다.\n", diff);
            break;
        case 'a':
            break;
        case 'o':
            printf("표준체중이 되려면 %.2fkg 만큼 빼야 합니다.\n", diff);
            break;
    }
    return 0;
}   