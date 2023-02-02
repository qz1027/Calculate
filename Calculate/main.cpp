#include<iostream>
#include"Calculate.h"
using namespace std;

int main() {
	Calculate c;
	int choice = 0;
	int num1 = 0;
	int num2 = 0;
	do{
		c.menu();
		cout << "请选择：";
		cin >> choice;
		if (choice == 0)break;
		cout << "请输入两个操作数：";
		cin >> num1 >> num2;
		switch (choice)
		{
		case 1: {
			cout << num1 << "+" << num2 << "=" << c.add(num1, num2) << endl;
			break;
		}
		case 2: {
			cout << num1 << "-" << num2 << "=" << c.low(num1, num2) << endl;
			break;
		}
		default:
			break;
		}
	} while (choice != 0);

	cout << endl;
	system("pause");
	return 0;
}