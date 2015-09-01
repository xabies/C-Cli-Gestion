#include "StdAfx.h"
#include "Pelicula.h"



Pelicula::Pelicula(void)
{
}


Pelicula::Pelicula(int idPeli, System::String^ nom, System::Boolean alqui, int dur)
{
	id=idPeli;
	nombre=nom;
	alquilada=alqui;
	duracion=dur;
}

Pelicula::~Pelicula(void)
{
}


int Pelicula::getDuracion(void)
{
	return duracion;
}

System::Boolean Pelicula::estaAlquilada(void)
{
	return alquilada;
}

System::String^ Pelicula::getNombre(void)
{
	return nombre;
}

void Pelicula::setId(int identificador)
{
	id=identificador;
}

void Pelicula::setDuracion(int dur)
{
	duracion=dur;
}

void Pelicula::setAlquilada(System::Boolean a)
{
	alquilada=a;
}

void Pelicula::setNombre(System::String^ nom)
{
	nombre=nom;
}