#include <iostream>

using namespace std;

class Stack
{
public:
	int m_size;
	int m_top;
	int* m_buffer;

public:
	void Initialize(int size = 10);
	void RemoveAll();
	bool Push(int value);
	bool Pop(int& value);

public:
	//접근자 함수
	int GetSize();
	int GetTop();
	bool SetSize(int size);
	bool GetData(int index, int& data);
};


void Stack::Initialize(int size)
{
	m_size = size;
	m_top = -1;
	m_buffer = new int[m_size];
	memset(m_buffer, 0, sizeof(int) * m_size);
}

void Stack::RemoveAll()
{
	m_size = 0;
	m_top = -1;
	delete[] m_buffer;
	m_buffer = NULL;
}

bool Stack::Push(int value)
{
	if (m_top >= m_size - 1) return false;
	m_buffer[++m_top] = value;
	return true;
}

bool Stack::Pop(int& value)
{
	if (m_top < 0) return false;
	value = m_buffer[m_top--];
	return true;
}

int Stack::GetSize()
{
	return m_size;
}

int Stack::GetTop()
{
	return m_top;
}

bool Stack::SetSize(int size)
{
	if (size < m_size) return false;
	int* tmp = m_buffer;
	m_size = size;
	m_buffer = new int[m_size];
	memcpy(m_buffer, tmp, sizeof(int) * (m_top + 1));
	delete[] tmp;
	return true;
}

bool Stack::GetData(int index, int& data)
{
	if (index < 0 || index > m_top)return false;
	data = m_buffer[index];
	return true;
}

int main()
{
	/*int arr[10];
	Stack S1;
	S1.m_size = 10;
	S1.m_top = 10;
	S1.m_buffer = arr;*/
	Stack s1;
	s1.Initialize(5); //Initialize()의 size인자를 5로 초기화
	Stack* p = new Stack;
	p->Initialize(100); //클래스 포인터를 생성하여 p변수에 Initialize(100)을 추가

	Stack s2;
	s2.Initialize(5);
	s2.m_top = 1; //protected, private로 변경했을 때 컴파일 에러
	//m_top을 잘못된 값으로 변경
	int data; 
	s2.Pop(data); //m_top이 잘못된 값이므로 잘못된 위치에서 데이터를 꺼내옴
	delete[] s1.m_buffer; //protected, private로 변경했을 때 컴파일 에러
	//m_buffer가 가리키는 동적 메모리 해제
	s2.Push(123); //해제된 메모리에 값 저장



	return 0;
}