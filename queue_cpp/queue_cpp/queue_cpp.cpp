// queue_cpp.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include "queue.h"

int _tmain(int argc, _TCHAR* argv[])
{
	using std::cout;
	using std::endl;
	queue line(5);
	line.enqueue(9);
	line.enqueue(2);
	line.enqueue(3);
	line.enqueue(4);
	 
	int out;
	line.dequeue(out);
	cout << out << endl;

	system("pause");
	return 0;
}

