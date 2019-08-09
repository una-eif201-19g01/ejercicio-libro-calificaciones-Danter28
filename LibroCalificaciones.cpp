/*
 * =====================================================================================
 *
 *       Filename:  LibroCalificaciones.cpp
 *
 *    Description:  Clase de Libro Calificaciones
 *
 *        Created:  2019-08-05
 *
 *         Author:  Maikol Guzman Alan mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */
#include "LibroCalificaciones.h"
	LibroCalificaciones::LibroCalificaciones():nombreCurso(""),nota(0){}
	LibroCalificaciones::LibroCalificaciones(string nc,int n):nombreCurso(nc),nota(n){}
	string LibroCalificaciones::obtenerRangoLetra(){
		int j=getNota();
		switch(j){
		case (j>=90):return "-A-";
		break;
		case ((j>=80)&&(j<90)): return "-B-";
		break;
		case ((j>=70)&&(j<80)):return "-C-";
		break;
		case ((j>=60)&&(j<70)):return "-D-";
		break;
		default:return "-F-";	
		}
	}
	string LibroCalificaciones::obtenerMensaje(){
		stringstream ss;
		ss<<"El curso "<<getNombreCurso()<<" con la nota "<<getNota()<<
			" pertenece al rango "<<obtenerRangoLetra()<<endl;
		return ss.str();
	}
	string LibroCalificaciones::getNombreCurso(){return nombreCurso;}
	int LibroCalificaciones::getNota(){return nota;}
	void LibroCalificaciones::setNota(int n){nota=n;}
	void LibroCalificaciones::setNombreCurso(string nc){nombreCurso=nc;}
