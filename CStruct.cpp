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
	void introduce() { cout << "안녕하세요" << endl; }
	void eat(const char* food) { cout << "저는 " << food << "를 먹었습니다."; }
	void sleep() { cout << "저 졸려요 근데 잠을 잤더니 1살 더 늘었어요" << age++ << endl; }
	void drive(char* destination) { cout << destination << "까지 운전을 합니다!" << endl; }
};


int main()
{
	Chulsoo chulsoo = { "철수", "남성", "작가", "diligent", 32 };

	char destination[20];
	cout << "목적지를 입력하세요!" << endl;
	cin >> destination;
	chulsoo.drive(destination);

	chulsoo.eat("스테이크"); //정해진 변수 명을 사용할때는 선언 인자에 const 를 붙여준다.


	return 0;
}