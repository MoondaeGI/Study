// 비표준 속성
const fields = document.querySelectorAll('[field]');  // 비표준 속성 선택자
console.log(fields);

const task = {
    title: '코드 에디터 개발',
    manager: 'CastleRing, Raccoon Lee',
    status: '',
};

for (let tag of fields) {  // 값 입력
    const field = tag.getAttribute('field');
    tag.textContent = task[field];
    console.log(tag);
}

/*
    <b field="title">코드 에디터 개발</b>
    <b field="manager">CastleRing, Raccoon Lee</b>
    <b field="status"></b>
*/

const btns = document.querySelectorAll('.btn');
for (let btn of btns) {  // btn 리스트 루프
    const status = btn.getAttribute('status');  // btn 내의 status 속성 가져오기
    btn.onclick = function () {  // 버튼 클릭 이벤트 구성
        fields[2].textContent = status;  //  fields[2](task.status)에 status값 입력
        fields[2].setAttribute('status', status);  // status값 출력
    };
}
