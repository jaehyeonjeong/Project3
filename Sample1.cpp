#include <iostream>

using namespace std;

class IntSample
{
public:
	void ShowScore();
	void setScore(const int s);
	int getScore();

private:
	int IntScore;
};

void IntSample::ShowScore()
{
	cout << "����: " << this->IntScore << endl;
}

void IntSample::setScore(const int s)
{
	IntScore = s;
}

int IntSample::getScore()
{
	return this->IntScore;
}

int main()
{
	IntSample Obj;

	Obj.setScore(100);
	cout << "����: " << Obj.getScore() << endl;

	return 0;
}
