// 이벤트 버블링
// 상, 하위의 객체에 모두 이벤트를 설정했을 경우, 하위의 이벤트를 호출하면 상위의 이벤트까지 모두 호출됨
// 버블링이 일어나도 이벤트 객체의 target은 첫 발생 시점의 이벤트만 사용됨
// stopPropagation을 사용해 버블링을 막을 수 있음 -> 하지만 버블링은 막지 않는게 좋음

const catList = document.querySelector('#list-1');

// for문으로 이벤트 객체를 추가한다면, 이후 js를 통해 새로운 값을 할당하면 이 값은 이벤트 등록을 못한다
for (let item of catList.children) {
    item.addEventListener('click', function (event) {
        event.target.classList.toggle('done-cat');
    });
}
// 이벤트 위임 (자식 요소의 이벤트 핸들러를 부모 요소에게 위임했다는 뜻)
// 값 자체에 이벤트를 등록할 경우, 각각의 값에 이벤트 핸들러를 등록한 것처럼 사용이 가능하고, 이후 추가되도 추가 가능함
catList.addEventListener('click', function(event) {
    // 하지만 부모 요소에도 이벤트가 발생하는 문제가 존재
    // if문을 사용해 해당 이벤트 객체의 target을 감싸서 원하는 곳에서만 이벤트가 추가되도록 할 수 있음
    if (event.target.classList.contains('item')) {  // list 내부의 li값(classList에 item을 포함하고 있음)
        event.target.classList.toggle('done-cat');
    }
});

const addCat = document.createElement('li');
addCat.classList.add('item');
addCat.textContent = 'new cat';
catList.append(addCat);

// event.preventDefault -> 브라우저의 기본 동작(드레그, 우클릭 등)을 제한하는 메소드
catList.addEventListener('click', function(event) {
    event.preventDefault();
    alert('지금은 사용할 수 없습니다.');  // 메세지 출력
});

document.addEventListener('contextmenu', function(event) {
    //  문서 전체의 우클릭 사용시 발생
    event.preventDefault();
    alert('지금은 사용할 수 없습니다.');  // 메세지 출력
});