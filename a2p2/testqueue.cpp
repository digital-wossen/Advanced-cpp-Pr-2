/*
    CH08-320143
    a2p2
    Wossen K Hailemariam
    w.hailemariam@jacobs-university.de
*/



#include "Queue.h"
#include <iostream>


using namespace std;


int main()

{
	Queue<int> my_que;

	for(int i=0; i<10; ++i)
		my_que.push(i);


	int val;
	for(int i=0; i<10; ++i)
	{

		if(my_que.pop(val))
			cout << val << " ";

	}

	cout << endl;
	return 0;

}
