// 요소 노드 주요 프로퍼티
const myTag = document.querySelector('#list-1');
//=======================================================
// innerHTML
console.log(myTag.innerHTML);
/*
    <li>Ragdoll</li>
            <li>British Shorthair</li>
            <li>Scottish Fold</li>
            <li>Bengal</li>
*/

// outerHTML -> 본인값을 포함한 모든 html값을 가져옴
console.log(myTag.outerHTML);
/*
    <ul id="list-1">
            <li>Ragdoll</li>
            <li>British Shorthair</li>
            <li>Scottish Fold</li>
            <li>Bengal</li>
        </ul>
*/

// textContent -> 요소 안의 값 중에서 html tag를 제외한 값만 가져옴
console.log(myTag.textContent);
/*
     Ragdoll
     British Shorthair
     Scottish Fold
     Bengal
*/

// 사용시 프로퍼티를 교체되거나 수정, 추가를 할 수 있음
// myTag.innerHTML += '<li>inner cat</li>';
// myTag.textContent += 'textContent cat';
// myTag.outerHTML = '<ul id="new-list"><li>Exotic</li></ul>';
//=======================================================
// inner/outer/textContent를 사용하면 프로퍼티가 새로 만들어지는 등 상당히 귀찮은 작업이 필요
// 대신 사용이 가능한 createElement

// 요소 앞에 추가 (inner)
const first = document.createElement('li');
first.textContent = 'first-cat';  // 요소 노드 꾸미기
myTag.prepend(first);  // 요소 노드 추가
// 요소 뒤에 추가 (inner)
const last = document.createElement('li');
last.textContent = 'last-cat';
myTag.append(last);
// 요소 앞에 추가 (outer)
const prev = document.createElement('p');
prev.textContent = 'prev-cat';
myTag.before(prev);
// 요소 뒤에 추가 (outer)
const next = document.createElement('p');
next.textContent = 'next0-cat';
myTag.after(next);
//=======================================================
// 모든 요소 삭제하기
// myTag.remove();

const cat2Tag = document.querySelector('#list-2');
cat2Tag.children[2].remove();  // 특정 요소 삭제

// 노드 이동하기
// cat2 list의 3번째 노드를 myTag list
myTag.append(cat2Tag.children[2]);
// cat1 list의 5번째 노드를 cat2 list의 1번 노드 앞에 삽입
cat2Tag.children[1].before(myTag.children[5]);
//=======================================================
const cat1Title = myTag.previousSibling;  // class: cat-title
const cat1ListDiv = cat1Title.parentElement;  // class: cat-list-div
const cat1Link = myTag.children[1].firstElementChild;

console.dir(myTag);  // ul#list-1
console.log(myTag.id);  // list-1

console.log(cat1Title);  // p

console.dir(cat1ListDiv);  // div.cat-list-div
console.log(cat1ListDiv.className);  // cat-list-div

console.dir(cat1Link);  // a

//getAttribute -> 속성에 접근
console.log(cat1Link.getAttribute('href'));  // http://google.com
console.log(cat1ListDiv.getAttribute('class'));  // cat-list-div

//setAttribute('속성', '값') -> 속성 추가or수정하기
cat1Link.setAttribute('href', 'http://naver.com');  // 기존의 href 값 변경
console.log(cat1Link.getAttribute('href'));  // http://naver.com

//removeAttribute -> 속성 제거
// cat1Link.removeAttribute('href');
console.log(cat1Link);  // <a>Ragdoll</a>
//=======================================================
// style 프로퍼티
myTag.children[0].style.textDecoration = 'line-through';
myTag.children[0].style.backgroundColor = "#DDDDDD";

// classList -> 가지고 있는 클래스를 리스트로 출력
console.log(cat1ListDiv.classList);  // DOMTokenList['cat-list-div', value: 'cat-list-div']

// add, remove, toggle
cat1Link.classList.add('cat1-link');
console.log(cat1Link.classList);  // DOMTokenList['cat1-link', value: 'cat1-link']

cat1Link.classList.remove('cat1-link');
console.log(cat1Link.classList);  // DOMTokenList[value: '']

cat1Link.classList.toggle('cat1-link', true);  // add
cat1Link.classList.toggle('cat1-link', false);  // remove
