#include "Header.h"
#include "Card.h"
#include <cstdlib>  // stdlib.h 의 cpp 버전
#include <ctime>	// time.h의 cpp 버전
// 랜덤 요소 추가

/*
	트럼프 카드는 A(1), 2, 3, 4, 5, 6, 7, 8, 9, 10, J(11), Q(12), K(13)의 숫자를 가지고 있음
	그리고 검정/빨강, 다이아/스페이드/하트/클로버의 문양도 가지고 있음

	클래스 생성 시, 카드를 뽑았습니다 라는 안내문 출력
	클래스 생성 시, 숫자와 모양을 인자값으로 받음. 색깔의 경우, 모양에 따라 설정(스페이드/클로버: black, 하트/다이아: red)
	메인을 통해 open()을 실행할 경우, 해당 트럼프 카드의 필드값 출력

	출력 예시)
	카드를 뽑았습니다.
	뽑은 카드 [♣ 10 BLACK]
*/

string rand_card_shape();
enum Shape
{
	spade
	, club
	, heart
	, dia
};

int main()
{
	srand(time(NULL));  // seed값에 현재 시간을 넣음

	Card card(rand() % 13 + 1, rand_card_shape());
	card.open();

	return 0;
}

string rand_card_shape()
{
	int rand_number = rand() % 4;

	if (rand_number == 0) {
		return "spade";
	}
	else if (rand_number == 1) {
		return "club";
	}
	else if (rand_number == 2) {
		return "heart";
	}
	else {
		return "dia";
	}
}

