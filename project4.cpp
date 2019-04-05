#include <iostream>
using namespace std;

class Complex{
public:
	Complex(double r,double i):
	  real(r),image(i){}
	Complex(double r):
	  real(r),image(0){}
	  void add(Complex c2){
	  real+=c2.real;
	  image+=c2.image;
	  }
	  void show(){
	  cout<<real<<"+"<<image<<"i"<<endl;
	  }
private:
	double real,image;
};

int main(){
	Complex c1(3,5);
	Complex c2=4.5;
	c1.show();
	c1.add(c2);
	c1.show();
	return 0;
}