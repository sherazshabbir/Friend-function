
#include <iostream>
using namespace std;

class base {
private:
	int a;

protected:
	int b;

public:
	base()
	{
		a = 10;
		b = 99;
	}
	
	friend void friendFunction(base& obj);
};



void friendFunction(base& obj)
{
	cout << "A :" << obj.a<< endl;
	cout << "B : " << obj.b;
}


int main()
{
	base object1;
	friendFunction(object1);

	return 0;
}

