// queue_cpp.cpp : �������̨Ӧ�ó������ڵ㡣
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

