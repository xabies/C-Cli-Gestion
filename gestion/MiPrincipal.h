#pragma once
#include "pelicula.h"


using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace gestion {

	/// <summary>
	/// Resumen de MiPrincipal
	///
	/// ADVERTENCIA: si cambia el nombre de esta clase, deberá cambiar la
	///          propiedad 'Nombre de archivos de recursos' de la herramienta de compilación de recursos administrados
	///          asociada con todos los archivos .resx de los que depende esta clase. De lo contrario,
	///          los diseñadores no podrán interactuar correctamente con los
	///          recursos adaptados asociados con este formulario.
	/// </summary>
	public ref class MiPrincipal : public System::Windows::Forms::Form
	{
	private:
		int tam;
		array<Pelicula ^> ^ listaPeliculas;


	public:
		MiPrincipal(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->CenterToScreen();


			// Anado la peli 1
			Pelicula ^p1= gcnew Pelicula;
			p1->setId(1);
			p1->setNombre("La Jungla de Cristal 1");
			p1->setDuracion(122);
			p1->setAlquilada(false);

			// Anado la peli 2
			Pelicula ^p2= gcnew Pelicula(2,"El sexto sentido", 114,true);
			p2->setDuracion(114);

			// Anado la peli 3
			Pelicula ^p3= gcnew Pelicula(3,"El ilusionista", 120,false);
			p2->setDuracion(120);

			listaPeliculas= gcnew array<Pelicula ^>(100);
			listaPeliculas->SetValue(p1,0);
			listaPeliculas->SetValue(p2,1);
			listaPeliculas->SetValue(p3,2);
			tam=3;

			for (int i=0;i<tam;i++){
				cmbTitulos->Items->Add(listaPeliculas[i]->getNombre());
			}
			seleccionadoElemento(0);
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~MiPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}


	protected: 

	protected: 


	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  txtAlquilada;





	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ComboBox^  cmbTitulos;

	private: System::Windows::Forms::Label^  txtDuracion;

	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MiPrincipal::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtAlquilada = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cmbTitulos = (gcnew System::Windows::Forms::ComboBox());
			this->txtDuracion = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(54, 118);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Duración";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(54, 192);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Estado";
			// 
			// txtAlquilada
			// 
			this->txtAlquilada->AutoSize = true;
			this->txtAlquilada->ForeColor = System::Drawing::Color::Red;
			this->txtAlquilada->Location = System::Drawing::Point(168, 192);
			this->txtAlquilada->Name = L"txtAlquilada";
			this->txtAlquilada->Size = System::Drawing::Size(35, 13);
			this->txtAlquilada->TabIndex = 6;
			this->txtAlquilada->Text = L"label4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(54, 51);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Pelicula";
			// 
			// cmbTitulos
			// 
			this->cmbTitulos->FormattingEnabled = true;
			this->cmbTitulos->Location = System::Drawing::Point(171, 51);
			this->cmbTitulos->Name = L"cmbTitulos";
			this->cmbTitulos->Size = System::Drawing::Size(179, 21);
			this->cmbTitulos->TabIndex = 10;
			this->cmbTitulos->SelectedIndexChanged += gcnew System::EventHandler(this, &MiPrincipal::cmbTitulos_SelectedIndexChanged);
			// 
			// txtDuracion
			// 
			this->txtDuracion->AutoSize = true;
			this->txtDuracion->Location = System::Drawing::Point(168, 118);
			this->txtDuracion->Name = L"txtDuracion";
			this->txtDuracion->Size = System::Drawing::Size(35, 13);
			this->txtDuracion->TabIndex = 11;
			this->txtDuracion->Text = L"label2";
			// 
			// MiPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(384, 239);
			this->Controls->Add(this->txtDuracion);
			this->Controls->Add(this->cmbTitulos);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtAlquilada);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"MiPrincipal";
			this->Text = L"Gestión Videoclub";
			this->Load += gcnew System::EventHandler(this, &MiPrincipal::MiPrincipal_Load);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MiPrincipal::MiPrincipal_FormClosed);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MiPrincipal_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {

				 Application::Exit();

			 }
	private: System::Void MiPrincipal_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void seleccionadoElemento(int sel){

			 Pelicula ^p=listaPeliculas[sel];
			 cmbTitulos->SelectedIndex=sel;
			 txtDuracion->Text=p->getDuracion().ToString() + " minutos";
			 if(p->estaAlquilada())
			 {
				txtAlquilada->Text="Alquilada";
				this->txtAlquilada->ForeColor = System::Drawing::Color::Red;
			 }
			 else
			 {
				txtAlquilada->Text="Libre";
				this->txtAlquilada->ForeColor = System::Drawing::Color::Green;
			 }
			 
			
		 }
private: System::Void cmbTitulos_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 
			 seleccionadoElemento(this->cmbTitulos->SelectedIndex);
		 }
};
}
