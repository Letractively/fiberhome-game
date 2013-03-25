#include <iostream>

#include <vector>

#include "include/classDefine.h"

#include <boost/mpl/inherit.hpp>

int arrayTest[10];


template<int a, int b>
struct MAX{
	enum{ result = (a > b) ? a : b};
};

/****************************************************************/

template<bool>
struct F;

template<>
struct F<true>
{
	static void fun(){
		cout << "the condition is true" << endl;
	}
};

template<>
struct F<false>
{
	static void fun(){
		cout << "the condition is false" << endl;
	}	
};


/*************************************************************/

template<int N>
struct FOR{
	static inline void fun(){
		FOR<N-1>::fun();
		cout << "Function called: N =" << N << endl;
	}
};

template<>
struct FOR<1>{
	static inline void fun(){
		cout << "Function called: N =" << 1 << endl;
	}
};

/*************************************************************/

int main(){

	command* cmd = new command();
	command  cmdItem1;
	command  cmdItem2;
	cmdItem2.access_time = cmdItem1.access_time;

	const vector<int> m(10, 5);

	cmd->setCommandId(100);
	cmd->setCommandType(1);
	cmd->setCommandName("modify");

#if 0
	cout << "test" << std::endl;
	cout << "commandId = " << cmd->getCommandId() << endl;
	cout << "commandName = " << cmd->getCommandName() << endl;
	cout << "commandType = " << cmd->getCommandType() << endl;
	cout << "access_time = " << cmd->access_time << endl;
	cout << "static const value = " << command::tryToModify << endl;
	cout << "the size of vector = " << m.size() << endl;

	cout << "+++++++++++++++++++++++++++++" << endl;
	for (int i = 0; i < 10; i++ )
	{
		cout << arrayTest[i];
		i != 9 ? cout << " " : cout << endl;
	}
	cout << "+++++++++++++++++++++++++++++" << endl;
#endif

	int a = MAX<7,5>::result;
	cout << "Max value is " << a << endl;
	F<false>::fun();
	F<true>::fun();

	FOR<10>::fun();
}
