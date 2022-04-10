#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>

class Karen
{
public:
	Karen();
	~Karen();
	void complain(std::string level);
	//void (Karen::*karenFuncPtr)(void);
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};

#endif