// 키보드 이벤트
/*
* KeyBoardEvent.type
* keydown: 키보드 버튼을 누른 순간
* keypress: 키보드 버튼을 누른 순간
* keyup: 키보드를 눌렀다 뗀 순간
*
* keydown vs keypress
* : keypress는 입력이 나오는 값에만 이벤트 발생. 계속 누르고 있어도 이벤트가 한번만 발생
* : keydown은 입력이 나오지 않는 기능적인 키에도 이벤트 발생. 계속 누르면 이벤트가 계속 발생
* -> 일반적으로 keydown이 권장됨
*
* KeyBoardEvent.key
* : 이벤트가 발생한 버튼의 값
*
* KeyBoardEvent.code
* : 이벤트가 발생한 버튼의 키보드에서 물리적인 위치
*/