#include <iostream>

using namespace std;

int main()
{
	//[] {cout << "Hello World" << endl; };
	//모던 C++
	[](int x, int y) {cout << "합은 " << x + y << endl; }(2, 3); 
	[]{cout << "안녕하세요" << endl; }();
	int i = 10;
	[=]()mutable {cout << "i : " << ++i << endl; }();
	cout << "[=]()mutalble >> i : " << i << endl;
	[&]() {cout << "i : " << ++i << endl; }();
	cout << "[&]() >> i : " << i << endl; //call by reference는 mutalble ㄴㄴ

	auto love = [](string a, string b) {
		cout << a << "보다 " << b << "가 좋아" << endl;
	};

	love("돈", "너");
	love("냉면", "만두");
	return 0;
}