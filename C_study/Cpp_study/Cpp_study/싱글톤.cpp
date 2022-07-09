#include "Header.h"

class Data
{
private:
	Data();
	static Data* data;
public:
	static Data get_inctance();
};

int main()
{
	Data data1 = Data::get_inctance();
	Data data2 = Data::get_inctance();

	return 0;
}

Data Data::get_inctance()
{
	if (data == NULL) {
		data = new Data();
		cout << "데이터가 생성되었습니다." << endl;
	}

	return *data;
}