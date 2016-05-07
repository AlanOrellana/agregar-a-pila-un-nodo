//============================================================================
// Name        : Archivo.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Estudiante.h"
using namespace std;




void Insertar(Alumno){

	Alumno est1;


est1.edad=12;
est1.nota=68;
est1.nombre="Juan";
est1.sguiente=NULL;

Alumno est2;
est2.edad=11;
est2.nota=85;
est2.nombre="Maria";
est2.sguiente=NULL;

Alumno est3;
est3.edad=12;
est3.nota=92;
est3.nombre="Pedro";
est3.sguiente=NULL;

primero= &est1;
		primero->sguiente=&est2;
		cout<<est1.sguiente->nombre<<endl;



}
