#include <iostream>

using namespace std;

class File
{
public:
	void load()
	{
		cout << "mp3 ������ �޸𸮿� �ø��ϴ�." << endl;
	}
};

class PowerDevice
{
public:
	void powerUp()
	{
		cout << "mp3 play�� ���� �Ŀ��� �ø��ϴ�." << endl;
	}
};

class Memory
{
public:
	int number;
private:
	int memory;
public:
	void expand()
	{
		cout << "mp3 play�� ���� �޸𸮸� �ø��ϴ�." << endl;
	}

	void expand_on(int memory)
	{
		this->memory = memory;
		cout << "mp3 �޸𸮸� Ȱ��ȭ ���Դϴ�." << endl;
		if (memory >= 4)
		{
			for (int i = 0; i < 4; i++)
			{
				cout << "mp3 �޸� �ٿ�ε�";
				cout << i + 1;
				cout << endl;
			}
			cout << "�޸� Ȱ��ȭ�� �Ϸ�Ǿ����ϴ�." << endl;
		}
		else
		{
			cout << "�޸𸮸� Ȱ��ȭ ���� ���߽��ϴ�." << endl;
		}
		
	}
};

class MP3
{
private:
	File file;
	PowerDevice powerdevice;
	Memory memory;
public:
	int number;
public:
	void play()
	{
		powerdevice.powerUp();
		memory.expand();
		file.load();
		cout << "mp3�� play �մϴ�." << endl;
	}

	void memoryjob()
	{
		file.load();
		memory.expand();
		memory.expand_on(memory.number = this->number);
	}
};

int main()
{
	MP3 mp3;
	mp3.play();
	cout << "MP3 play number" << endl;
	cin >> mp3.number;
	mp3.memoryjob();
}