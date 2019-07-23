//Wossen k Hailemariam
//w.hailemariam@jacobs-university.de
//programming in c++ II
//CH08-320143
//a2 p1.cpp



#include <iostream>

using namespace std;

class Complex
{
private:
	double r, i;
public:
	Complex():r(0), i(0){}
	Complex(const double x, const double y):r(x), i(y){}
	Complex(const Complex&);
	~Complex(){}

	//Setters
	void set_i(const double &x){i = x;}
	void set_r(const double &x){r = x;}

	//Getters
	double get_i(){return i;}
	double get_r(){return r;}

	//Methods
	void print();
	Complex add(Complex);
	Complex subtract(Complex);
	Complex multiply(Complex);
	Complex conjugate();
	double norm() const;

	//Operator overloads
	friend Complex operator+(const Complex&, const Complex&);
	friend Complex operator-(const Complex&, const Complex&);
	friend Complex operator*(const Complex&, const Complex&);
	Complex& operator=(const Complex&);
	bool operator<(const Complex&);
	bool operator>(const Complex&);
	bool operator<=(const Complex&);
	bool operator>=(const Complex&);
	friend istream& operator>>(istream&, Complex&);
	friend ostream& operator<<(ostream&, const Complex&);
};