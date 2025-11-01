// 이차 방정식의 계수를 사용자에게서 입력받고 근을 구하는 프로그램

#include <stdio.h>
#include <math.h> // sqrt랑 fabs 함수를 사용하기 위한 헤더파일 추가


int main()
{
    double a,b,c; // 이차방정식의 계수
    double discriminant; // 판별식
    double root1, root2; // 근
    const double EPSILON = 1e-9; // 오차를 보정하기 위한 입실론 기호 상수로 선언

    printf("이차방정식의 계수를 입력하시오(a, b, c): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) { // a가 0이라면 일차방정식 아니면 상수이다
        if (b == 0) { // 상수일경우
            if (c == 0)
                printf("근은 모든 실수 입니다\n");
            else 
                printf("근은 없습니다\n");
        }
        else { // 일차방정식일경우
            if (c == 0)
                printf("근은 0.00 입니다\n");
            else
                printf("근은 %.2f 입니다\n",-c/b);
        }
    }
    else {
        discriminant = b*b - 4.0*a*c; // 판별식 계산

        if (discriminant > 0) { // 판별식이 0보다 크면 근 2개를 가진다
            root1 = (-b + sqrt(discriminant))/(2.0*a); // 근1 계산
            root2 = (-b - sqrt(discriminant))/(2.0*a); // 근2 계산
            printf("근은 %.2f, %.2f 입니다\n", root1, root2);
        }
        else if (fabs(discriminant) < EPSILON) // 판별식이 0이라면 중근을 가진다
            printf("근은 %.2f(중근) 입니다\n", -b / (2.0 * a)); // 중근 계산하고 출력
            
        else // 판별식이 음수라면 실근을 가지지 않는다
            printf("실근이 존재하지 않습니다.\n");      
    }

    return 0;
}
