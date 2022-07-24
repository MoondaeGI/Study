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

		cout << getString() << "�� " << getDestring() << "���� ��ȯ�ϰڽ��ϴ�." << endl;
		cout << getString() << "�� �Է����ּ���. >> ";
		cin >> value;
		result = convert(value);

		cout << "��ȯ ����� " << result << getDestring() << "�Դϴ�." << endl;
	};
};

class W2D : public Converter
{
private:
	virtual double convert(double src) { return src / ratio; }
	virtual string getString() { return "��"; }
	virtual string getDestring() { return "�޷�"; };
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

	// ���� ���
	// ���� �޷��� ��ȯ��ڽ��ϴ�.
	// ���� �Է����ּ��� >>
	// ��ȯ ����� n �޷� �Դϴ�.

	return 0;
}