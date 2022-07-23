#include "Header.h"

template <typename T>
class MyStack
{
private:
	int capacity;  // 저장 가능한 개수
	int set;  // 저장 인덱스
	T* stack;  // 스택

public:
	MyStack(int capacity) : capacity(capacity)
	{
		set = 0;
		stack = new T[capacity];
	};

	int length() 
	{ 
		if (set > capacity) return capacity;
		else if (set < 0) return 0;
		else return set; 
	}

	int capapcity() { return capacity; }

	T pop()
	{
		if (0 < set) {
			return stack[--set]; 
		}
		else {
			cout << "스택 안에 값이 없습니다. 값을 입력하십시오." << endl;
			return 0;
		}
	}

	void push(T value)
	{
		if ( set <= capacity - 1) { stack[set++] = value; } 
		else { cout << "더 이상 스택에 값을 넣을 수 없습니다." << endl; }
	};

	
};

int main()
{
	MyStack<int>* my_stack = new MyStack<int>(5);
	
	cout << "capacity: " << my_stack->capapcity() << endl;

	cout << "push start" << endl;
	
	for (int i = 0; i < 10; i++) {
		cout << "lenght: " << my_stack->length() << endl;
		my_stack->push(i);
	}

	cout << "pop start" << endl;

	for (int i = 0; i < 10; i ++) {
		cout << "lenght: " << my_stack->length() << endl;
		cout << my_stack->pop() << endl;
	}

	delete my_stack;
	return 0;
}