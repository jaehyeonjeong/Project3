#include <iostream>

using namespace std;

class Chulsoo
{
public:
	int count;
};

int main()
{
	Chulsoo chulsoo;
	chulsoo.count = 1;
	for (int i = 0; i < 10; i++)
	{
		[&](int steakWeight) {cout << "eatLambda()::ö����" << chulsoo.count++ \
			<< "��°" << steakWeight << "g¥�� ������ũ�� �Դ´�" << endl; }(1000);
	}
	cout << chulsoo.count << endl;
	return 0;
}