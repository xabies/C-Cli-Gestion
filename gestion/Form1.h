#pragma once
#include "MiPrincipal.h"


namespace gestion {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Form1
	///
	/// ADVERTENCIA: si cambia el nombre de esta clase, deberá cambiar la
	///          propiedad 'Nombre de archivos de recursos' de la herramienta de compilación de recursos administrados
	///          asociada con todos los archivos .resx de los que depende esta clase. De lo contrario,
	///          los diseñadores no podrán interactuar correctamente con los
	///          recursos adaptados asociados con este formulario.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->CenterToScreen();
			this->txtUsuario->Select();
			
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnLogin;
	protected: 

	private: System::Windows::Forms::TextBox^  txtUsuario;
	private: System::Windows::Forms::TextBox^  txtContrasena;
	protected: 


	private: System::Windows::Forms::Label^  lblUsuario;
	private: System::Windows::Forms::Label^  label2;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->txtUsuario = (gcnew System::Windows::Forms::TextBox());
			this->txtContrasena = (gcnew System::Windows::Forms::TextBox());
			this->lblUsuario = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnLogin
			// 
			this->btnLogin->Location = System::Drawing::Point(102, 181);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(75, 23);
			this->btnLogin->TabIndex = 0;
			this->btnLogin->Text = L"Login";
			this->btnLogin->UseVisualStyleBackColor = true;
			this->btnLogin->Click += gcnew System::EventHandler(this, &Form1::btnLogin_Click);
			// 
			// txtUsuario
			// 
			this->txtUsuario->Location = System::Drawing::Point(136, 73);
			this->txtUsuario->Name = L"txtUsuario";
			this->txtUsuario->Size = System::Drawing::Size(100, 20);
			this->txtUsuario->TabIndex = 1;
			// 
			// txtContrasena
			// 
			this->txtContrasena->Location = System::Drawing::Point(136, 122);
			this->txtContrasena->Name = L"txtContrasena";
			this->txtContrasena->PasswordChar = '*';
			this->txtContrasena->Size = System::Drawing::Size(100, 20);
			this->txtContrasena->TabIndex = 2;
			this->txtContrasena->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::txtContrasena_KeyPress);
			// 
			// lblUsuario
			// 
			this->lblUsuario->AutoSize = true;
			this->lblUsuario->Location = System::Drawing::Point(60, 73);
			this->lblUsuario->Name = L"lblUsuario";
			this->lblUsuario->Size = System::Drawing::Size(43, 13);
			this->lblUsuario->TabIndex = 3;
			this->lblUsuario->Text = L"Usuario";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(63, 128);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Contraseña";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lblUsuario);
			this->Controls->Add(this->txtContrasena);
			this->Controls->Add(this->txtUsuario);
			this->Controls->Add(this->btnLogin);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(290, 290);
			this->MinimizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Acceso";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnLogin_Click(System::Object^  sender, System::EventArgs^  e) {
				login();
			 }



private: Void login(){
			if(validarLogin(txtUsuario->Text,txtContrasena->Text)){
				System::Diagnostics::Debug::WriteLine("Login correcto");
				this->Hide();

				MiPrincipal ^miPrincipal = gcnew MiPrincipal;
				miPrincipal->ShowDialog();

				

			}
			 else{
				System::Diagnostics::Debug::WriteLine("Login Fallido");
				MessageBox::Show("Usuario y contraseña incorrectos","Error", MessageBoxButtons::OK,MessageBoxIcon::Error);

				txtUsuario->Text="";
				txtContrasena->Text="";
				txtUsuario->Focus();

			 }
		 }

private: Boolean validarLogin(String ^user, String ^pass) {
				if(user->Equals("xabi") && pass->Equals("1234")){
					return true;
				 }
				 else{
					return false;
				 }
		 }


private: System::Void txtContrasena_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 
			 if(e->KeyChar == (char)Keys::Enter){
				System::Diagnostics::Debug::WriteLine("Capturado un enter");
				login();
			 }
		 }

};



}

