#pragma once

ref class Pelicula
{

private:
	int id;
	System::String ^nombre;
	int duracion;
	System::Boolean alquilada;

public:
	Pelicula(void);
	Pelicula(int idPeli, System::String^ nom, System::Boolean alqui, int dur);
	virtual ~Pelicula(void);
	
	int getDuracion();
	System::Boolean estaAlquilada();
	System::String^ getNombre();
	void setId(int);
	void setDuracion(int);
	void setAlquilada(System::Boolean);
	void setNombre(System::String^);
};
