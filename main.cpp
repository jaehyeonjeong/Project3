#include "IntSample.h"

int main()
{
	IntSample Obj;
	int* score = new int[100];
	Obj.setScore(100);
	cout << "����: " << Obj.getScore() << endl;
	Obj.CopyScore(score);
	return 0;
}