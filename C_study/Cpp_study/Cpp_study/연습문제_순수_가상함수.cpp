#include "Header.h"

class Converter
{
protected:
	double ratio;
	virtual double convert(double src) = 0;
	virtual string getString() = 0;
	virtual string getDestring() = 0;
public:
	void run() 
	{
		double value;
		double result;

		cout << getString() << "을 " << getDestring() << "으로 교환하겠습니다." << endl;
		cout << getString() << "을 입력해주세요. >> ";
		cin >> value;
		result = convert(value);

		cout << "교환 결과는 " << result << getDestring() << "입니다." << endl;
	};
};

class W2D : public Converter
{
private:
	virtual double convert(double src) { return src / ratio; }
	virtual string getString() { return "원"; }
	virtual string getDestring() { return "달러"; };
public:
	W2D(int ratio)
	{
		this->ratio = ratio;
	}
};

int main()
{
	Converter* w2d = new W2D(1300);
	w2d->run();

	// 실행 결과
	// 원을 달러로 교환사겠습니다.
	// 원을 입력해주세요 >>
	// 교환 결과는 n 달러 입니다.

	return 0;
}