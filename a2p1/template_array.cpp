//Wossen k Hailemariam
//w.hailemariam@jacobs-university.de
//programming in c++ II
//CH08-320143
//a2 p1.cpp


//Problem 2.1 Template array minimum 



#include<iostream>
#include<cassert>
#include"Complex.h"



#define SIZE 10




using namespace std;


template <class T>


T array_min(T arr[], const int &n)

{
	assert(n>0);
	T smallest=arr[0];
	for(int i=1; i<n; ++i)
		if(arr[i]<smallest) smallest=arr[i];
	return smallest;
}




int main()

{
	int A[SIZE];

	for(int i=0; i<SIZE; ++i)
    {
        A[i]=i;
    }
    //outputs zero
	cout << array_min(A, SIZE) << endl;
	Complex *complexs=new Complex[SIZE];

	for(int i=0; i<10; ++i)
	{
		complexs[i].set_i(i);
		complexs[i].set_r(i);
	}

	cout << array_min(complexs, SIZE);
	delete[]complexs;
	return 0;
}