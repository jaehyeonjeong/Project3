#include <iostream>

using namespace std;

#define NAME_LEN 20
#define SEX_LEN 10
#define JOB_LEN 20
#define CHARACTER_LEN 20
#define DRIVE_LEN 20

struct Chulsoo
{
	char name[NAME_LEN];
	char sex[SEX_LEN];
	char job[JOB_LEN];
	char character[CHARACTER_LEN];
	int age;
	void introduce() { cout << "�ȳ��ϼ���" << endl; }
	void eat(const char* food) { cout << "���� " << food << "�� �Ծ����ϴ�."; }
	void sleep() { cout << "�� ������ �ٵ� ���� ����� 1�� �� �þ����" << age++ << endl; }
	void drive(char* destination) { cout << destination << "���� ������ �մϴ�!" << endl; }
};


int main()
{
	Chulsoo chulsoo = { "ö��", "����", "�۰�", "diligent", 32 };

	char destination[20];
	cout << "�������� �Է��ϼ���!" << endl;
	cin >> destination;
	chulsoo.drive(destination);

	chulsoo.eat("������ũ"); //������ ���� ���� ����Ҷ��� ���� ���ڿ� const �� �ٿ��ش�.


	return 0;
}