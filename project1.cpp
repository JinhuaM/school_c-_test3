#include<iostream>
using namespace std;

const float PI=3.141593;
const float FENCE_PRICE=35;
const float CONCRETE_PRICE=20;

class Circle{
public:
	Circle(float r);
	float circumference();
	float area();
private:
	float radius;
};

Circle::Circle(float r){
	radius=r;
}

float Circle::circumference(){
	return 2*PI*radius;
}

float Circle::area(){
	return PI*radius*radius;
}

int main(){
	float radius;
	cout<<"Enter the radius of the pool:";
	cin>>radius;
	Circle pool(radius);
	Circle poolRim(radius+3);
	float fenceCost=poolRim.circumference()*FENCE_PRICE;
	cout<<"Fencing Costis $"<<fenceCost<<endl;
	float concretCost=(poolRim.area()-pool.area())*CONCRETE_PRICE;
	cout<<"Concrete Cost is $"<<concretCost<<endl;
	return 0;
}
