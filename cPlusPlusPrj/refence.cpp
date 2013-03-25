#include <iostream>

class refenceValue{
public:

	refenceValue(){
		std::cout << "default construct function call" << std::endl; }

	refenceValue(int x, int y):a(x),b(y){
		std::cout << "construct function call" << std::endl;
	}

	refenceValue(const refenceValue& value){
		std::cout << "copy construct function called" << std::endl;
		a = value.a;
		b = 101;
	}

	void operator=(refenceValue& value){
		std::cout << "operator = called" << std::endl;
		//a = value.a;
		b = 10000;
	}

	int a;
   	int b;	
};

class setRefenceValue{
public:
	void operator()(refenceValue &a){
		a.a = 11;
		a.b = 11;
	}
};

class setValue{
public:
	void operator()(refenceValue a){
		a.a = 22;
		a.b = 22;
	}
};

int main(){

	int i;

	std::cout << ">>>>>>>>>>refence test<<<<<<<<<<<" << std::endl;

	refenceValue ref1( 1, 1);
	refenceValue ref2( 2, 2);
	refenceValue ref3 = ref2;
	refenceValue ref4(ref2);
	refenceValue *ref5 = new refenceValue(123, 321);
	refenceValue &ref6 = *ref5; 
	*ref5=(ref4);
//	refenceValue& ref4;

	std::cout << "ref1: " << ref1.a << " and " << ref1.b << std::endl;
	std::cout << "ref2: " << ref2.a << " and " << ref2.b << std::endl;
	std::cout << "ref3: " << ref3.a << " and " << ref3.b << std::endl;
	std::cout << "ref4: " << ref4.a << " and " << ref4.b << std::endl;
	std::cout << "ref5: " << ref5->a << " and " << ref5->b << std::endl;

	///dangerous statement.
	delete ref5;

	int *p = new int[10000];
	//memset(p, 0, sizeof(p));
	for(i = 0; i < 10000; i++)
	{
		p[i] = 1;
	}

	std::cout << "i = " << i << ";" << std::endl;

	std::cout << "ref6: " << ref6.a << " and " << ref6.b << std::endl;
	std::cout << std::endl;
	
	setRefenceValue mySetRefe;
	mySetRefe( ref2 );
	std::cout << "ref2: " << ref2.a << " and " << ref2.b << std::endl;
	std::cout << std::endl;

	setValue mySetValue;
	mySetValue( ref1 );
	std::cout << "ref1: " << ref1.a << " and " << ref1.b << std::endl;
	delete p;
}
