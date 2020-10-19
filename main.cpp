#include "Engenheiro.cpp"
#include "Vendedor.cpp"

using namespace std;

int main()
{
  Engenheiro eng1;
  eng1.name = "Joao Snow";
  eng1.paymentPerHour = 35;
  eng1.projects = 3;
  cout << "Nome: " << eng1.name << endl;
  cout << "Salario Mes: " << eng1.monthPayment(9.5) << endl;
  cout << "Projetos: " << eng1.projects << endl;
  cout << endl;

  Engenheiro eng2;
  eng2.name = "Daniela Targaryen";
  eng2.paymentPerHour = 30;
  eng2.projects = 1;
  cout << "Nome: " << eng2.name << endl;
  cout << "Salario Mes: " << eng2.monthPayment(8) << endl;
  cout << "Projetos: " << eng2.projects << endl;
  cout << endl;

  Engenheiro eng3;
  eng3.name = "Bruno Stark";
  eng3.paymentPerHour = 30;
  eng3.projects = 2;
  cout << "Nome: " << eng3.name << endl;
  cout << "Salario Mes: " << eng3.monthPayment(8) << endl;
  cout << "Projetos: " << eng3.projects << endl;
  cout << endl;

  Vendedor vend1;
  vend1.name = "Tonho Lannister";
  vend1.paymentPerHour = 20;
  vend1.totalMonth = 5000;

  cout << "Nome: " << vend1.name << endl;
  cout << "Salario Mes: " << vend1.monthPayment(6) << endl;
  cout << "Quota vendas: " << vend1.totalYear() << endl;
  cout << endl;

  Vendedor vend2;
  vend2.name = "Jose Mormont";
  vend2.paymentPerHour = 25;
  vend2.totalMonth = 3000;

  cout << "Nome: " << vend2.name << endl;
  cout << "Salario Mes: " << vend2.monthPayment(8) << endl;
  cout << "Quota vendas: " << vend2.totalYear() << endl;
  cout << endl;

  Vendedor vend3;
  vend3.name = "Sonia Stark";
  vend3.paymentPerHour = 30;
  vend3.totalMonth = 4000;

  cout << "Nome: " << vend3.name << endl;
  cout << "Salario Mes: " << vend3.monthPayment(8) << endl;
  cout << "Quota vendas: " << vend3.totalYear() << endl;

  return 0;
}