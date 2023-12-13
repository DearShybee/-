#include<iostream>
#include<ctime>
using namespace std;

void sleep(int time) 
{ 
	clock_t head = clock(); while (clock() - head <= time) {} 
}

void print()
{
	cout << "            *\n" << endl;
	cout << "            *\n" << endl;
	cout << "          *    *\n" << endl;
	cout << "     *    *    *    *\n" << endl;
	cout << "*    *   原神启动   *    *\n" << endl;
	cout << "     *    *    *    *\n" << endl;
	cout << "          *    *\n" << endl;
	cout << "            *" << endl;

	char a7[9] = { ' ' };
	for (char a1 : a7)
	{
		cout << a1 << endl;
	}

	sleep(2000);

	char a3[39] = { ' ' };
	for (char a1 : a3)
	{
		cout << a1 << endl;
	}


	cout << "===========================" << endl;
	cout << "|                         |" << endl;
	cout << "|   -----    `、   |      |" << endl;
	cout << "|   |/ _    ---  _ |__    |" << endl;
	cout << "|   ||--|     /  |_|_|    |" << endl;
	cout << "|   | ~     / |` |_|_|    |" << endl;
	cout << "|   /  |      |    |      |" << endl;
	cout << "|  / , | .    |    |      |" << endl;
	cout << "|                         |" << endl;
	cout << "===========================" << endl;

	char a6[9] = { ' ' };
	for (char a1 : a6)
	{
		cout << a1 << endl;
	}

}

void yesono()
{
	char a3[39] = { ' ' };
	for (char a1 : a3)
	{
		cout << a1 << endl;
	}

	string s;
	cout << "请大声喊出启动指令：\n您的答案：";
	cin >> s;
	if (s == "原神启动")
	{
		cout << "指令正确，允许启动！！！" << endl;
		system("pause");
		cout << "加载中. . ." ;
		sleep(3000);
		char a[9] = { ' ' };
		for (char a1 : a)
		{
			cout << a1 << endl;
		}
		print();
	}
	else
	{
		cout << "指令错误，启动终止\n";
		system("pause");
		cout << "请在深刻反省并自我检讨后重新尝试！\n";

		char a[100] = { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ' };
		for (char a1 : a)
		{
			cout << a1 << "                " << endl;
			cout << a1 << "请               检" << endl;
			cout << a1 << "勿               讨" << endl;
			cout << a1 << "操               时" << endl;
			cout << a1 << "做               间" << endl;
			cout << a1 << "                 " << endl;
		}

		sleep(5000);
		cout << "请确定已进行深刻自我反省后执行以下操作。\n";
		system("pause");

		char a2[39] = { ' ' };
		for (char a1 : a2)
		{
			cout << a1 << endl;
		}

		string s1;
		cout << "如已进行了深刻的自我反省，请输入“我不是一名合格的OP”\n您的答案：";
		cin >> s1;

		if (s1 == "我不是一名合格的OP")
		{
			char a4[39] = { ' ' };
			for (char a1 : a4)
			{
				cout << a1 << endl;
			}

			yesono();
		}

		else
		{
			char a5[39] = { ' ' };
			for (char a1 : a5)
			{
				cout << a1 << endl;
			}
			cout << "事实证明，死猪不怕开水烫\n吔屎啦扑街仔\n";

			char a6[19] = { ' ' };
			for (char a1 : a6)
			{
				cout << a1 << endl;
			}

			return;
		}
	}
}

int main()
{
	yesono();

	return 0;
}
