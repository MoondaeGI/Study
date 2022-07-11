// 마우스 버튼 이벤트
// MouseEvent.butten
/*
* event.button값에 따라서 마우스의 어느 부분이 클릭되었는지 알 수 있음.
* 0: 마우스 왼쪽 버트, 1: 마우스 휠, 2: 마우스 오른쪽 버튼
*
* MouseEvent.type
* click: 마우스 왼쪽 버트 클릭
* contextmenu: 마우스 오른쪽 버튼 클릭
* dblclick: 더블 클릭
* mousedown: 마우스 버튼을 누른 순간
* mouseup: 마우스 버튼을 뗀 순간
*
* 이벤트가 중복으로 적용됨
* 마우스 버튼 클릭:
* > mousedown -> mouseup -> click 순으로 발생
* 마우스 더블 클릭:
* > mousedown -> mouseup -> click -> mousedown -> mouseup -> click -> dblclick
* 마우스 오른쪽 버튼 클릭: 운영체제마다 순서가 다름
*/

const blueOrRedDiv = document.querySelector('#blue-or-red');

document.addEventListener('contextmenu', function(event) {  // 우클릭 메뉴 삭제
    event.preventDefault();
});

function mouseClickEvent(event) {  // 마우스 클릭 위치에 따른 이벤트 발생
    if (event.button == 0) {  // 좌클릭을 한다면,
        blueOrRedDiv.style.backgroundColor = "blue";
    } else if (event.button == 1) {  // 휠버튼을 눌렀다면,
        blueOrRedDiv.style.backgroundColor = "gray";
    } else {  // 우클릭을 눌렀다면,
        blueOrRedDiv.style.backgroundColor = "red";
    }
}

blueOrRedDiv.addEventListener('mousedown', mouseClickEvent);  // 이벤트 추가

/*
* MouseEvent.type
* mousemove: 마우스가 움직였을 때
* mouseover: 마우스 포인터가 요소 밖에서 안으로 들어았을때
* mouseout: 마우스 포인터가 요소 안에서 밖으로 나갈때
*
* MouseEvent.clientS, .clientY
* : 화면에 표시되는 창 기준 마우스 포인터의 위치
*
* MouseEvent.pageX, .pageY
* : 웹 문서 전체 기준 마우스 포인터 위치
*
* MouseEvent.offsetX, offsetY
* : 이벤트가 발생한 요소 위치 기준 마우스 포인터 위치
*/
const mouseMove = document.querySelector('#mouse-move');

function mouseMoveEvent(event) {
    console.log("mouse is moving");
    console.log(`client: (${event.clientX}, ${event.clientY})`);
    console.log(`page: (${event.pageX}, ${event.pageY})`);
    console.log(`offset: (${event.offsetX}, ${event.offsetY})`);
}

function printMouseOverAndOutEvent(event) {
    console.log('type: ', event.type);
    console.log('target: ', event.target);
}

mouseMove.addEventListener('mousemove', mouseMoveEvent);
mouseMove.addEventListener('mouseover', printMouseOverAndOutEvent);
mouseMove.addEventListener('mouseout', printMouseOverAndOutEvent);
