// 학생들의 성적을 받아서 학점을 출력하는 프로그램

#include <stdio.h>

int main()
{
    int score;

    printf("성적을 입력하시오: ");
    scanf("%d", &score);

    if (score <= 100 && score >= 0) // 0점에서 100 사이의 값인지 확인
    {
        if (score >= 90) // 90점 이상
            printf("학점 : A\n");
        else if (score >= 80) // 90점 이상이 아니라는 것을 이미 확인했기 때문에 score < 90을 포함할 필요가 없음
            printf("학점 : B\n");
        else if (score >= 70)
            printf("학점 : C\n");
        else if (score >= 60)
            printf("학점 : D\n");
        else
            printf("학점 : F\n");
    }
    else
        printf("잘못된 입력입니다.\n");

    return 0;
}