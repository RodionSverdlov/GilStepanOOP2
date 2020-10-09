#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

class SerialNumber {

private:
	int id;
	static int count;

public:
	void getId(string aa) {
		cout << "Порядковый номер = " << aa << " = " << id << endl;
	}

	void kolvo_Obj() {
		cout << "Количество объектов = " << count << endl;
	}

	SerialNumber() {
		count++;
		id = count;
	}//конструктор
};
int SerialNumber::count = 0;

int main()
{
	setlocale(0, " "); 
	SerialNumber a;
	SerialNumber b;
	SerialNumber c;
	a.getId("a");
	b.getId("b");
	c.getId("c");
	a.kolvo_Obj();
}
