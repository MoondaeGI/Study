#include "Header.h"

template <typename T>
class MyStack
{
private:
	int capacity;  // ���� ������ ����
	int set;  // ���� �ε���
	T* stack;  // ����

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
			cout << "���� �ȿ� ���� �����ϴ�. ���� �Է��Ͻʽÿ�." << endl;
			return 0;
		}
	}

	void push(T value)
	{
		if ( set <= capacity - 1) { stack[set++] = value; } 
		else { cout << "�� �̻� ���ÿ� ���� ���� �� �����ϴ�." << endl; }
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