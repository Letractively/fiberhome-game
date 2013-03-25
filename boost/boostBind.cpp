#include <boost/bind.hpp>
#include <iostream>
#include <boost/shared_ptr.hpp>


int sum2(int a, int b)
{
	return a+b;
}

int sum3(int a, int b, int c)
{
	return a+b+c;
}


//function object
struct funcObject{
	void operator()(int para){
		std::cout << para << std::endl;	
	}
}; 

struct A{

	int Aa;

	A(int a):Aa(a){}

	int func(int x, int y){
		std::cout << x << " and " << y << " and " << Aa <<std::endl;
		return x + y + Aa;
	}
};

int main(){

	std::cout << "function name" << std::endl;
	std::cout << "______________________________" << std::endl;
	///The first use of boost bind;
	std::cout << boost::bind(sum2, 1, 2)() << std::endl;
	std::cout << boost::bind(sum3, 1, 2, 3)() << std::endl;

	///second use
	std::cout << boost::bind(sum2, 1, _1)(1) << std::endl;
	std::cout << boost::bind(sum3, 1, 2, _1)(1) << std::endl;

	std::cout << "______________________________" << std::endl;
	///function object
	//std::cout << boost::bind<void>(f, _1)(1) << std::endl;
	funcObject f;
	boost::bind( boost::type<void>(), f, _1)(2); 
	
	std::cout << "______________________________" << std::endl;

	A a(100);
	A* ap = new A(200);
	int result = 0;	
//	result = boost::bind<int>(&A::func, a, 100, 101);
	std::cout << "result = " << result << std::endl;
	boost::bind<int>(&A::func, ap, 200, 201)();
//	boost::bind<int>(&A::func, ptr_a, 300, 301)();

}
