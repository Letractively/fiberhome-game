#include <iostream>

class interface {

public:
	virtual void print() = 0;
};


class implementation : public interface{

public:
	virtual void print(){
		std::cout << "print function called" << std::endl;
	}

private:
};

void functionTest( interface &inter)
{
	inter.print();
}

int main(){
	implementation imp;
	functionTest(imp);
}
