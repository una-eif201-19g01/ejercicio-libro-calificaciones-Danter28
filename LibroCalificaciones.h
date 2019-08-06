/*
 * =====================================================================================
 *
 *       Filename:  LibroCalificaciones.h
 *
 *    Description:  Encabezado de la clase Libro Calificaciones
 *
 *        Created:  2019-08-05
 *
 *         Author:  Maikol Guzman Alan mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */


#ifndef LIBROCALIFICACIONES
#define LIBROCALIFICACIONES
#include<iostream>
#include<string>
#include<sstream>
using std::string;
using std::cout;
using std::endl;

class LibroCalificaciones{
	
private:
	string nombreCurso;
	int nota;
	string obtenerRangoLetra();
public:
	LibroCalificaciones();
	LibroCalificaciones(string nc,int n);
	string obtenerMensaje();
	string getNombreCurso();
	int getNota();
	void setNota(int);
	void setNombreCurso(string);

};


#endif //LIBROCALIFICACIONES
