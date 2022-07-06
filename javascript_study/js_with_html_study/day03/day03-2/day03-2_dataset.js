// dataset -> 비표준 함수를 안전하게 활성화하는 방법
// data-* 속성 생성 후, dataset으로 호출

const fields = document.querySelectorAll('[data-field]');
const task = {
    title: '코드 에디터 개발',
    manager: 'CastleRing, Raccoon Lee',
    status: '',
};

for (let tag of fields) {
    const field = tag.dataset.field;
    tag.textContent = task[field];
}

const btns = document.querySelectorAll('.btn');
for (let btn of btns) {
    const status = btn.dataset.status;
    btn.onclick = function () {
        fields[2].textContent = status;
        fields[2].dataset.status = status;
    };
}