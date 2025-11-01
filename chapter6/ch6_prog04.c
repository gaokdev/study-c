// 놀이 공원에서 롤러코스터에 타려면 키가 140cm 이상이고 나이가 10살 이상이어야 한다고 가정
// 사용자에게 키와 나이를 질문한 후에 "타도 좋습니다" 또는 "죄송합니다"를 출력하는 프로그램

#include <stdio.h>

int main()
{
    int height;
    int age;

    const int MIN_HEIGHT = 140;
    const int MIN_AGE = 10;

    printf("키와 나이를 입력하시오: ");
    scanf("%d %d", &height, &age);

    if (height >= MIN_HEIGHT && age >= MIN_AGE)
        printf("타도 좋습니다.\n");
    else
        printf("죄송합니다.\n");
    
    return 0;
}