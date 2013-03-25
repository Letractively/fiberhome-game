#include <iostream>

class father;
class son;

class father{
public:
	virtual void fatherFunc( father *)
	{
		std::cout << "father function is called" << std::endl;
	}

};

class son : public father{
public:
	virtual void sonFunc(son *)
	{
		std::cout << "son function is called" << std::endl;
	}
};


int main(){
	
	son mySon;
	father myFather;
	myFather.fatherFunc( &mySon );
	mySon.sonFunc( &mySon );
	//mySon.sonFunc( &myFather );
}
