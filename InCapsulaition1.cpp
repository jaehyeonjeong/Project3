#include <iostream>

using namespace std;

class File
{
public:
	void load()
	{
		cout << "mp3 파일을 메모리에 올립니다." << endl;
	}
};

class PowerDevice
{
public:
	void powerUp()
	{
		cout << "mp3 play를 위한 파워를 올립니다." << endl;
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
		cout << "mp3 play를 위한 메모리를 늘립니다." << endl;
	}

	void expand_on(int memory)
	{
		this->memory = memory;
		cout << "mp3 메모리를 활성화 중입니다." << endl;
		if (memory >= 4)
		{
			for (int i = 0; i < 4; i++)
			{
				cout << "mp3 메모리 다운로드";
				cout << i + 1;
				cout << endl;
			}
			cout << "메모리 활성화가 완료되었습니다." << endl;
		}
		else
		{
			cout << "메모리를 활성화 하지 못했습니다." << endl;
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
		cout << "mp3를 play 합니다." << endl;
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