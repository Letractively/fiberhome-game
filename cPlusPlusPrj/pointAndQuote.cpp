#include <iostream>	

class A{
public:
	void setValue(int a){
		value = a;
	}

	int getValue(){
		return value;
	}
private:
	int value;
};

class B{
public:
	void setAValue(A a)
	{
		a.setValue(7);
	}
};

int main(){

	A a;
	B b;
	
	a.setValue(4);
	b.setAValue(a);

	std::cout << "The value is " << a.getValue() <<std::endl;

}
