#include <string>
#include "Empregado.hpp"

using namespace std;

class Engenheiro : public Empregado
{
public:
  string name;
  int projects;
};
