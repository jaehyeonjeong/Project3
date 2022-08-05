#pragma once
#ifndef _INTSAMPLE_H_
#define _INTSAMPLE_H_

#include <iostream>
using namespace std;

class IntSample
{
public:
	void ShowScore();
	void setScore(const int s);
	int getScore();
	void CopyScore(int* cp_score);

private:
	int IntScore;
};

#endif