#ifndef COMPLEX
#define COMPLEX
#include<iostream>
using std::cout;
using std::endl;
using std::cin;
class Complex {
private:
	double re_, im_;
public:
	Complex(double r, double i) :  re_{r}, im_{i} {}
	Complex(double r) : re_{r}, im_{0} {}
	Complex() : re_{0}, im_{0} {}
	//Get'eriai
	inline double Get_real() const { return re_; }
	inline double Get_imag() const { return im_; }
	//Set'eriai
	void Give_real(double r) { re_ = r; }
	void Give_imag(double i) { im_ = i; }
	//Operatoriai
	Complex& operator+=(Complex a) { re_ += a.re_, im_ += a.im_; return *this; }
	Complex& operator-=(Complex a) { re_ -= a.re_, im_ -= a.im_; return *this; }
	Complex& operator*=(Complex a)
	{
		int new_re_ = re_ * a.re_;
		im_ = im_ * a.im_;
		re_ = new_re_;
		return *this;
	}
	Complex operator-(Complex& a)
	{
		Complex temp;
		temp.re_ = re_ - a.re_;
		temp.im_ = im_ - a.im_;
		return temp;
	}
};

Complex operator+(Complex&, Complex&);
//Complex operator-(Complex&, Complex&);
Complex operator*(Complex&, Complex&);
std::ostream& operator<<(std::ostream&, const Complex &);
std::istream& operator>>(std::istream&, Complex &);
char Ivestis_kr(char);
#endif