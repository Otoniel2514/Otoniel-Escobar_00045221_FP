#include "iostream"

int main()

{

  double calificaciones = 0;
  double cal_aux = 0;
  double promedio = 0;

for (int i = 1; i <= 6; i++)
{
  std::cout <<"Ingrese las calificaciones obtenidas del alumno: ";
  std::cin >> cal_aux;

  calificaciones = calificaciones + cal_aux;
}

promedio = (calificaciones) / 6;

std::cout <<"El promedio de sus calificaciones es: " << promedio;

return 0;

}
