// (x,y) 좌표를 입력받아서 좌표가 속하는 사분면을 화면에 출력하는 프로그램

#include <stdio.h>
#include <math.h> // 입실론과 비교 할 때 사용되는 fabs()함수를 사용하기 위해 포함시킨 헤더파일

int main()
{
    double x,y;
    int quadrant;
    const int X_AXIS = 5;
    const int Y_AXIS = 6;
    const int ORIGIN = 7;
    const double EPSILON = 1e-9; // double형과 0이 같은지 확인하기 위해 기호상수로 입실론 선언

    printf("(x, y) 좌표를 입력하시오: ");
    scanf("%lf %lf", &x, &y);

    int is_x_zero = (fabs(x) < EPSILON); // x가 0인지 아닌지 확인. double형의 x를 입실론이랑 비교해서 작을 경우(0일 경우) 1이 저장되고 0이 아닐 경우 0이 저장된다
    int is_y_zero = (fabs(y) < EPSILON);

    if (is_x_zero && is_y_zero) quadrant = 7;
    else if (is_x_zero && !is_y_zero) quadrant = 6; // x,y가 0인지 아닌지를 먼저 확인해놔서 편리하게 사용할 수 있다
    else if (!is_x_zero && is_y_zero) quadrant = 5;

    else if (x > 0) {
        if (y > 0) quadrant = 1;
        else if (y < 0) quadrant = 4;
    }
    else if (x < 0) {
        if (y > 0) quadrant = 2;
        else if (y < 0) quadrant = 3;
    }
    
    switch (quadrant) {
        case 7: printf("원점에 있습니다.\n"); break;
        case 5: printf("x축 위에 있습니다.\n"); break;
        case 6: printf("y축 위에 있습니다.\n"); break;
        default: printf("제%d사분면 위에 있습니다.\n", quadrant); break;
    }

    return 0;
}