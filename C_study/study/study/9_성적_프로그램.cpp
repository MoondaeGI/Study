#include "Header.h"


// switch: ()안에 변수를 넣고 그 값에 해당하는 case의 경우 실행할 명령문을 처리함
// 같이 활용되는 제어문: break

//  switch를 이용해서 점수를 입력받을 때, 점수에 따른 등급이 나오게 되는 프로그램을 설계
int main()
{
	int score = 0;
	char rank;

	printf("당신의 성적 점수를 입력하십시오\n");
	printf("등급 표: 90점 이상> A, 80점 이상> B, 70점 이상> C, 60점 이상> D, 그 외> F\n");
	printf("최소 점수는 0점이며, 최고 점수는 100점까지입니다.\n");
	printf("점수: ");
	scanf("%d", score);

	switch (score / 10) {
		case 9:
			rank = 'A';
			break;
		case 8:
			rank = 'B';
				break;
		case 7:
			rank = 'C';
			break;
		case 6:
			rank = 'D';
			break;
		defult:
			rank = 'F';
	}

	// 0보다 작거나 1--보다 큰 값은 입력을 못받도록 설정해주어라
	printf("당신의 성적은 %d이며, 등급은 %c입니다.", score, rank);
	return 0;
}