/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  Main Libro Calificaciones
 *
 *        Created:  2019-08-05
 *
 *         Author:  Maikol Guzman Alan mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */
#include "LibroCalificaciones.h"

int main() {
	LibroCalificaciones L1("Contabilidad", 90);
	LibroCalificaciones L2("Gerencia", 85);
	LibroCalificaciones L3("Progra II", 73);
	LibroCalificaciones L4("Estructuras", 60);
	LibroCalificaciones L5("Adm. Proyectos", 59);
	LibroCalificaciones L6("Paradigmas", 40);
	
	cout<<L1.obtenerMensaje();
	

    return 0;
}
