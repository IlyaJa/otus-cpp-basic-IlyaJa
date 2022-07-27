

#include <iostream>
//#include<SimpleTimer.h>
using namespace std;

int main()
{
	//SimpleTimer timer;
	setlocale(LC_ALL, "ru");
	double a;
	double b;
	char p;
	bool on_off=true;
	while (on_off)
	{		
	cout << "Введите первое число" << endl;
	cin >> a;
	cout << "Введите действие" << endl;
	cin >> p;
	cout << "Введите второе число" << endl;
	cin >> b;
	
	switch(p)
	{
	case '+':
		cout << a + b << endl;
		break;
	case '-':
		cout << a - b << endl;
		break;
	case '*':
		cout << a * b << endl;
		break;
	case '/':
		if (b != 0)
		{
			cout << a / b << endl;
		}
		else{
			cout << "На 0 делить нельзя" << endl;
		}
		break;
	default:
		break;
	}

	cout<<"Для продолжения работы введите 1, для выхода введите 0 "<<endl;
	cin >> on_off;
	}
	return 0;
}

