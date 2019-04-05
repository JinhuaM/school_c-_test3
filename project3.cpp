#include<iostream>
using namespace std;

class Tree{
public:
	Tree(int newAges);
	~Tree(){
		age();
	}
	void  grow(int years){
	ages=ages+years;
	}
	int age(){
	return ages;
	}
private:
	int ages;
};

Tree::Tree(int newAges){
	ages=newAges;
}

int main(){
	Tree t1(10);
	t1.grow(3);
	cout<<"The ages of the tree is:"<<t1.age()<<endl;
}