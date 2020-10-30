#include <cstdio>
#include <cstdlib>

#include <mkl.h>

double mult(double num1, double num2) {
	double res = 0;
	for (int i = 0; i < 1000000; i++) {
		res = num1+i * num2+i;
		//Para no multiplicar con constantes, se va sumando la iteraci�n a los n�meros de la multiplicaci�n
	}
	return res;

}

int main(int argc, char* argv[]) {

	double fin, inicio = dsecnd(); // Inicializac�n falsa
	inicio = dsecnd(); //Inicio de cronometraje
	double res = mult(5, 5);
	fin = dsecnd(); //Fin de cronometraje
	printf("Tiempo: %lf ms\n", (fin - inicio) * 1.0e3);
	std::getchar();
	return 0;
}