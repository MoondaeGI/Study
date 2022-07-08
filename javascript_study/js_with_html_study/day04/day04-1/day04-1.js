// 이벤트 핸들러 등록
const btn = document.querySelector('#js-click');

// onclick 이벤트를 다시 등록하면, 이전 이벤트 핸들러가 지워짐
btn.onclick = function() {
    console.log('Hi!');
};

function event1() {
    console.log('Hi!');
};

function event2() {
    console.log('hello!');
};
// addEventListener(이벤트 조건, 이벤트 내용) -> 이벤트 핸들러를 사용하는 가장 좋은 방법.
btn.addEventListener('click', event1);
btn.addEventListener('click', event2);
// removeEventListener -> 이벤트를 삭세하는 메소드
// 등록했던 핸들러를 그대로 전달해야 함
btn.removeEventListener('click', event2);

//=================================================================
// 이벤트 객체
// 원하는 이벤트 값을 임의로 사용 가능함 (제네릭같은 거)
/*
    type: 이벤트 이름
    target: 이벤트가 발생한 요소
    currentTarget: 이벤트 핸들러가 발생한 요소
    timeStamp: 이벤트 발생 시각
    bubbles: 버블링 단계인지 판단

    마우스 이벤트
    button	누른 마우스의 버튼 (0: 왼쪽, 1: 가운데(휠), 2: 오른쪽)
    clientX, clientY	마우스 커서의 브라우저 표시 영역에서의 위치
    pageX, pageY	마우스 커서의 문서 영역에서의 위치
    offsetX, offsetY	마우스 커서의 이벤트 발생한 요소에서의 위치
    screenX, screenY	마우스 커서의 모니터 화면 영역에서의 위치
    altKey	이벤트가 발생할 때 alt키를 눌렀는지
    ctrlKey	이벤트가 발생할 때 ctrl키를 눌렀는지
    shiftKey	이벤트가 발생할 때 shift키를 눌렀는지
    metaKey	이벤트가 발생할 때 meta키를 눌렀는지 (window는 window키, mac은 cmd키)

    키보드 이벤트
    key	누른 키가 가지고 있는 값
    code	누른 키의 물리적인 위치
    altKey	이벤트가 발생할 때 alt키를 눌렀는지
    ctrlKey	이벤트가 발생할 때 ctrl키를 눌렀는지
    shiftKey	이벤트가 발생할 때 shift키를 눌렀는지
    metaKey	이벤트가 발생할 때 meta키를 눌렀는지 (window는 window키, mac은 cmd키)
*/
function printEvent(event) {
    console.log(event);
    if (event.type === 'dblclick') {
        event.target.style.color = 'red';
    } else {
        event.target.style.color = 'black';
    }
}

btn.addEventListener('click', printEvent);
btn.addEventListener('dblclick', printEvent);