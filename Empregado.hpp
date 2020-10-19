#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado
{

public:
  double paymentPerHour;
  double totalMonth;

  double monthPayment(double workedHours);
};

#endif