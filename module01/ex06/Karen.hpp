
#ifndef MODULE01_KAREN_HPP
#define MODULE01_KAREN_HPP

#include <iostream>
#include <string>

class Karen {

private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	void wrong(void);

public:
	void complain(std::string level);
	typedef void (Karen::*method)(void);
};


#endif //MODULE01_KAREN_HPP
