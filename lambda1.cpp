#include <iostream>

using namespace std;

int main()
{
	//[] {cout << "Hello World" << endl; };
	//��� C++
	[](int x, int y) {cout << "���� " << x + y << endl; }(2, 3); 
	[]{cout << "�ȳ��ϼ���" << endl; }();
	int i = 10;
	[=]()mutable {cout << "i : " << ++i << endl; }();
	cout << "[=]()mutalble >> i : " << i << endl;
	[&]() {cout << "i : " << ++i << endl; }();
	cout << "[&]() >> i : " << i << endl; //call by reference�� mutalble ����

	auto love = [](string a, string b) {
		cout << a << "���� " << b << "�� ����" << endl;
	};

	love("��", "��");
	love("�ø�", "����");
	return 0;
}