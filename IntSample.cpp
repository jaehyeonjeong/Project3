#include "IntSample.h"

void IntSample::ShowScore()
{
	cout << "Á¡¼ö: " << this->IntScore << endl;
}

void IntSample::setScore(const int s)
{
	IntScore = s;
}

int IntSample::getScore()
{
	return this->IntScore;
}

void IntSample::CopyScore(int* cp_score)
{
	*cp_score = IntScore;
}
