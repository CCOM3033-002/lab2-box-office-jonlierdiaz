// Jonlier Díaz Rivera, jonlierdiaz, 801-23-2761

#include <iostream>
#include <iomanip>
using namespace std;

int main(){

  // Declaración de variables
  string movie;
  double adultTicket, childTicket, grossProfit, netProfit, paidDistributor;

  // Desplega el propósito del programa
  cout << "Este programa calcula la ganancia bruta y neta de taquillas y la ganancia del distribuidor de una película que se proyecta en el cine.\n";

  // Le pide al usuario que ingrese el nombre de la película
  cout << "\nIngrese el nombre de la película: ";
  getline(cin, movie);

  // Le pide al usuario que ingrese la cantidad de taquillas de adultos vendidas
  cout << "Ingrese la cantidad de taquillas de adultos vendidas: ";
  cin >> adultTicket;

  // Le pide al usuario que ingrese la cantidad de taquillas de niños vendidas
  cout << "Ingrese la cantidad de taquillas de niños vendidas: ";
  cin >> childTicket;

  // Cálculo de ganancias brutas
  grossProfit = (adultTicket * 10) + (childTicket * 6);

  // Cálculo de ganancias netas
  netProfit = grossProfit * 0.2;

  // Cálculo de monto a pagar al distribuidor
  paidDistributor = grossProfit - netProfit;

  // Desplega el nombre de la película
  cout << "\nNombre de la película:";
  cout << setw(24) << "\"" << movie << "\"";
  
  // Desplega la cantidad de taquillas de adultos
  cout << "\nCantidad de taquillas de adultos vendidas:";
  cout << setw(8) << adultTicket;

  // Desplega la cantidad de taquillas de niños
  cout << "\nCantidad de taquillas de niños vendidas:";
  cout << setw(10) << childTicket;
  
  // Desplega ganancias brutas
  cout << "\nGanancia bruta:";
  cout << setw(31) << "$";
  cout << setw(9) << setprecision(2) << fixed << showpoint << grossProfit;

  // Desplega ganancias netas
  cout << "\nGanancia neta:"; 
  cout << setw(32) << "$";
  cout << setw(9) << setprecision(2) << fixed << showpoint << netProfit;

  // Desplega el monto a pagar al distribuidor
  cout << "\nMonto a pagar al distribuidor:";
  cout << setw(16) << "$";
  cout << setw(9) << setprecision(2) << fixed << showpoint << paidDistributor << endl;
    
  return 0;
}