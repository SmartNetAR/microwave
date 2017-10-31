#include "Microwave.h"
#pragma once

namespace clrTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	Microwave* mw = new Microwave;
	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnOpen;
	private: System::Windows::Forms::Button^  btnClose;
	protected:


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  lblState;
	private: System::Windows::Forms::Button^  btnRefresh;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  lblLight;

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnOpen = (gcnew System::Windows::Forms::Button());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblState = (gcnew System::Windows::Forms::Label());
			this->btnRefresh = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblLight = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnOpen
			// 
			this->btnOpen->Location = System::Drawing::Point(94, 75);
			this->btnOpen->Name = L"btnOpen";
			this->btnOpen->Size = System::Drawing::Size(99, 47);
			this->btnOpen->TabIndex = 0;
			this->btnOpen->Text = L"Open";
			this->btnOpen->UseVisualStyleBackColor = true;
			this->btnOpen->Click += gcnew System::EventHandler(this, &MyForm::btnOpen_Click);
			// 
			// btnClose
			// 
			this->btnClose->Location = System::Drawing::Point(211, 77);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(99, 45);
			this->btnClose->TabIndex = 1;
			this->btnClose->Text = L"Close";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &MyForm::btnClose_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(126, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"State:";
			// 
			// lblState
			// 
			this->lblState->AutoSize = true;
			this->lblState->Location = System::Drawing::Point(193, 13);
			this->lblState->Name = L"lblState";
			this->lblState->Size = System::Drawing::Size(0, 13);
			this->lblState->TabIndex = 3;
			// 
			// btnRefresh
			// 
			this->btnRefresh->Location = System::Drawing::Point(13, 8);
			this->btnRefresh->Name = L"btnRefresh";
			this->btnRefresh->Size = System::Drawing::Size(75, 23);
			this->btnRefresh->TabIndex = 4;
			this->btnRefresh->Text = L"Refresh";
			this->btnRefresh->UseVisualStyleBackColor = true;
			this->btnRefresh->Click += gcnew System::EventHandler(this, &MyForm::btnRefresh_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 144);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(30, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Light";
			// 
			// lblLight
			// 
			this->lblLight->AutoSize = true;
			this->lblLight->Location = System::Drawing::Point(52, 144);
			this->lblLight->Name = L"lblLight";
			this->lblLight->Size = System::Drawing::Size(0, 13);
			this->lblLight->TabIndex = 6;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(467, 254);
			this->Controls->Add(this->lblLight);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnRefresh);
			this->Controls->Add(this->lblState);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->btnOpen);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void RefreshControls() {
			String^ strNew = gcnew String(mw->GetStateName());
			this->lblState->Text = strNew;
			if (mw->IsLightOn()) {
				lblLight->Text = "On";
			}
			else {
				lblLight->Text = "Off";
			}
		}
	private: System::Void btnOpen_Click(System::Object^  sender, System::EventArgs^  e) {
		mw->OpenDoor();
		RefreshControls();
	}
	private: System::Void btnRefresh_Click(System::Object^  sender, System::EventArgs^  e) {
		RefreshControls();
	}
	private: System::Void btnClose_Click(System::Object^  sender, System::EventArgs^  e) {
		mw->CloseDoor();
		RefreshControls();
	}
};
}
