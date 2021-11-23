
#include "Karen.hpp"

int main(void)
{
	Karen a, b;

	a.complain("DEBUG");
	a.complain("INFO");
	b.complain("WARNING");
	b.complain("ERROR");
	a.complain("MUSIC");
	b.complain("info");
}