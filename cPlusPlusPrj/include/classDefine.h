
using namespace std;
class command{
public:
	command():access_time(0){}
	int getCommandId() const;
	string getCommandName() const;
	int getCommandType() const;

	void setCommandId(int id);
	void setCommandName(string name);
	void setCommandType(int type);

private:
	command(const command&);
	string commandName;
	int commandType;
	int commandId;
public:
	mutable int access_time;
	static const double tryToModify = 5;
};

//const double command::tryToModify = 202.2;

inline int command::getCommandId() const{
	access_time++;
	return commandId;
}
inline string command::getCommandName() const{
	access_time++;
	return commandName;
}
inline int command:: getCommandType() const{
	access_time++;
	return commandType;
}

inline void command::setCommandId(int id){
	commandId = id;
}
inline void command::setCommandName(string name){
	commandName = name;
}
inline void command::setCommandType(int type){
	commandType = type;
}
