
//inicio de programa
#include <iostream>

int main() {
	//declaracion de Variables a y b
	float a;
	float b;
	//declaracion de Variables determinadas segun el usuario 

	std::cout << "Ingrese el primer numero: ";
	std::cin >> a;

	std::cout << "Ingrese el segundo numero: ";
	std::cin >> b;

	//declaracion de ecuaciones
	float suma = a+b;
	float resta = a - b;
	float multiplicacion = a*b;
	float divicion = a/b;
	//resultados de las operaciones dadas
	std::cout << "la suma es: " << suma << std::endl;
	std::cout << "la resta es: " << resta << std::endl;
	std::cout << "la multiplicacion es: " << multiplicacion << std::endl;
	std::cout << "la divicion  es: " << divicion << std::endl;

	return 0;

}