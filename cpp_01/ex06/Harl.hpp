#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

enum e_harl
{
	DEBUG = 0,
	INFO,
	WARNING,
	ERROR,
	NB_HARL,
};

class Harl
{
public:
	Harl();
	~Harl();
	void complain(std::string level);
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};

#endif