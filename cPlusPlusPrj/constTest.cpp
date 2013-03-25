#include <iostream>

class A{
public:
	A(int value):a( value ){}
	A func() const
	{
		return *this;
	}
	int get(){
		return a;
	}
private:
	int a;
};


int main(){
	A a(100);
	int b = a.func().get();
	std::cout << b << std::endl;
}
