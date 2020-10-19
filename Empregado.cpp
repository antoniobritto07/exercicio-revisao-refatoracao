#include "Empregado.hpp"

double Empregado::monthPayment(double workedHours)
{
    double hours = workedHours;

    if (workedHours > 8)
    {
        double x = workedHours - 8;
        hours += (x / 2);
    }

    return hours * paymentPerHour;
}