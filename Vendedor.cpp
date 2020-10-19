#include <string>
#include "Empregado.cpp"

class Vendedor : public Empregado
{

public:
	std::string name;

	double totalYear()
	{
		return totalMonth * 12;
	}
};
