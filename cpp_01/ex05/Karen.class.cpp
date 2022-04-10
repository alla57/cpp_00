#include "Karen.hpp"
#include <map>

Karen::Karen(){
	return ;
}

Karen::~Karen(){
	return ;
}

void	Karen::complain(std::string level){
	std::string levels[4];
	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";
	void (Karen::*levelFunc[])() = {&Karen::debug};//, this->info, this->warning, this->error};
	// levelFunc = &Karen::debug;
	//this->karenFuncPtr = &Karen::debug;
	int i = 0;
	while (level != levels[i] && i < 4)
		++i;
	if (i != 4)
		(this->*levelFunc[0])();
		//(this->*karenFuncPtr)();
	return ;
}

void	Karen::debug(void){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
	return ;
}

void	Karen::info(void){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
	return ;
}

void	Karen::warning(void){
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Karen::error(void){
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}
