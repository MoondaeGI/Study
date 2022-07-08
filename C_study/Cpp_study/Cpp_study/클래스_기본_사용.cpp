#include "Header.h"

class Sample
{
private:
	int data;
public:
	Sample(int data);
	int getData();
	void setData(int data);
};

int Sample::getData() {
	return data;
}

void Sample::setData(int data) {
	Sample::data = data;
}

Sample::Sample(int data) {
	setData(data);
}

int main()
{
	Sample sample(10);
	cout << sample.getData() << endl;
}