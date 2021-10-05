#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int lapis = 45, borracha = 420,  cadernos = 8, fitas = 1350;
  
  cout <<setfill('.'); //Manipulador
  cout << '\n' << "Lapis    "<<setw(12)<<lapis;  
  cout << '\n' << "Borrachas    " <<setw(12)<<borracha;
  cout << '\n' << "Cadernos    "<<setw(12)<<cadernos;
  cout << '\n' << "Fitas    " <<setw(12)<<fitas;
  cout << endl;
  system("Pause");
  return (0);
 }
