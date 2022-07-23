#include "Header.h"

template <typename T>
void array_reverse(T arrays[], int array_length) {
	for (int i = array_length - 1; i >= 0; i--) {
		cout << arrays[i] << " ";
	}
	cout << endl;
}

template <typename T>
bool isSame(T a, T b) { return a == b; }

int main()
{
	int int_array[] = { 1, 3, 5, 7, 9 };
	string string_array[] = {"A", "B", "C", "D", "E"};

	array_reverse(int_array, 5);
	array_reverse(string_array, 5);

	int a = 5;
	int b = 5;

	string a_s = "A";
	string b_s = "B";

	cout << isSame(a, b) << endl;
	cout << isSame(a_s, b_s) << endl;

	return 0;
}