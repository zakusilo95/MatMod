#pragma once
#include<iostream>
#include<cmath> 

namespace CppWinForm4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart3;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 37);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Рассчитать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(75, 77);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 20);
			this->label1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(13, 77);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"M(X)= ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(13, 117);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"M(Y)= ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(75, 117);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 20);
			this->label4->TabIndex = 3;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(13, 154);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 20);
			this->label5->TabIndex = 6;
			this->label5->Text = L"D(X)= ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(75, 154);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 20);
			this->label6->TabIndex = 5;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(13, 192);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(55, 20);
			this->label7->TabIndex = 8;
			this->label7->Text = L"D(Y)= ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(75, 192);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 20);
			this->label8->TabIndex = 7;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(13, 228);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(67, 20);
			this->label9->TabIndex = 10;
			this->label9->Text = L"M(XY)= ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(75, 228);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 20);
			this->label10->TabIndex = 9;
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(207, 31);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Excel;
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(286, 236);
			this->chart1->TabIndex = 11;
			this->chart1->Text = L"РЯД РАСПРЕДЕЛЕНИЯ Х";
			// 
			// chart2
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(511, 31);
			this->chart2->Name = L"chart2";
			this->chart2->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Fire;
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chart2->Series->Add(series2);
			this->chart2->Size = System::Drawing::Size(284, 236);
			this->chart2->TabIndex = 12;
			this->chart2->Text = L"РЯД РАСПРЕДЕЛЕНИЯ У";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(260, 8);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(177, 20);
			this->label11->TabIndex = 13;
			this->label11->Text = L"Ряд распределения Х";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(596, 12);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(176, 20);
			this->label12->TabIndex = 14;
			this->label12->Text = L"Ряд распределения У";
			// 
			// chart3
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart3->Legends->Add(legend3);
			this->chart3->Location = System::Drawing::Point(207, 302);
			this->chart3->Name = L"chart3";
			this->chart3->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::SeaGreen;
			series3->ChartArea = L"ChartArea1";
			series3->Legend = L"Legend1";
			series3->Name = L"Series1";
			this->chart3->Series->Add(series3);
			this->chart3->Size = System::Drawing::Size(488, 300);
			this->chart3->TabIndex = 15;
			this->chart3->Text = L"chart3";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(370, 279);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(242, 20);
			this->label13->TabIndex = 16;
			this->label13->Text = L"Плотность распределения СВ";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(13, 262);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(51, 20);
			this->label14->TabIndex = 17;
			this->label14->Text = L"r(xy)= ";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(59, 262);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(0, 20);
			this->label15->TabIndex = 18;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(807, 631);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->chart3);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		double VerMass[3][3] = { {0.12, 0.22, 0.06},
								 {0.04, 0.12, 0.14},
								 { 0.13, 0.13, 0.04 } };
		double ArrayX[3] = {7.2, 10, 12.8};
		double ArrayY[3] = {0.8, 1.6, 2.4};
		
		double Px[3] = {};
		double Py[3] = {};
		double My;
		double Mx;
		double Mx2;
		double My2;
		double Dx;
		double Dy;
		double MXY;

		// подсчт рада распределения по х и по у
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				 Px[i]+= VerMass[i][j];
				 Py[i] += VerMass[j][i];
			}
			
		}
		// подсчет мат. характеристик по формулам
		for (int i = 0; i < 3; i++)
		{
			Mx += ArrayX[i] * Px[i];
			Mx2 += (ArrayX[i]*ArrayX[i])  * Px[i];
			My += ArrayY[i] * Py[i];
			My2 += (ArrayY[i] * ArrayY[i])  * Py[i];
		}
		Dx = Mx2 - Mx*Mx;
		Dy = My2 - My*My;
		// подсчет среднеквадратического откланения
		double ox = sqrt(Dx);
		double oy = sqrt(Dy);
		// мат. ожидание для ХУ
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				MXY += VerMass[j][i]*ArrayX[j]*ArrayY[i];
			}

		}
		//коэфициент корреляции
		double r= (MXY-(Mx*My))/(ox*oy);

		label1->Text = Convert::ToString(Mx);
		label4->Text = Convert::ToString(My);
		label6->Text = Convert::ToString(Dx);
		label8->Text = Convert::ToString(Dy);
		label10->Text = Convert::ToString(MXY);
		label15->Text = Convert::ToString(r);
		
		double RandX[100] = {};
		double RandY[100] = {};
		int PlotnostX[3] = {};
		int PlotnostY[3] = {};
		//разбиваем интервал на 3 части и проверемя количество попаданий на каждый отрезок 
		for (int i = 0; i < 100; i++)
		{
			RandX[i] = 0+(double)(rand()) / RAND_MAX*(1-0);
			if (RandX[i] <= Px[0])
			{
				RandX[i] = ArrayX[0];
				PlotnostX[0]++;
			}
			else if (RandX[i] > Px[0] && RandX[i] < Px[0] + Px[1])
			{
				RandX[i] = ArrayX[1];
				PlotnostX[1]++;
			}
			else { PlotnostX[2]++; RandX[i] = ArrayX[2]; }

			RandY[i] = 0 + (double)(rand()) / RAND_MAX * (1 - 0);
			if (RandY[i] <= Py[0])
			{
				RandY[i] = ArrayY[0];
				PlotnostY[0]++;
			}
			else if (RandY[i] > Py[0] && RandY[i] < Py[0] + Py[1])
			{
				RandY[i] = ArrayY[1];
				PlotnostY[1]++;
			}
			else { PlotnostY[2]++; RandY[i] = ArrayY[2]; }
		}
		// вывод статистических данных для радяХ и рядаУ
		for (int i = 0; i < 3; i++)
		{
				chart1->Series["Series1"]->Points->AddXY(i, PlotnostX[i]);
				chart2->Series["Series1"]->Points->AddXY(i, PlotnostY[i]);
		}

		//провряем количество поподаваний СВ с Х и У одновременно
		int ResultArray[9] = {};
		for (int i = 0; i < 100; i++)
		{
			if (RandX[i] == ArrayX[0])
			{
				if (RandY[i] == ArrayY[0])
					ResultArray[0]++;
				else if (RandY[i] == ArrayY[1])
					ResultArray[1]++;
				else ResultArray[2]++;
			}
			if (RandX[i] == ArrayX[1])
			{
				if (RandY[i] == ArrayY[0])
					ResultArray[3]++;
				else if (RandY[i] == ArrayY[1])
					ResultArray[4]++;
				else ResultArray[5]++;
			}

			if (RandX[i] == ArrayX[2])
			{
				if (RandY[i] == ArrayY[0])
					ResultArray[6]++;
				else if (RandY[i] == ArrayY[1])
					ResultArray[7]++;
				else ResultArray[8]++;
			}

		}
		//вывод статистических данных для дискретных СВ 
		for (int i = 0; i < 9; i++)
		{
			chart3->Series["Series1"]->Points->AddXY(i, ResultArray[i]);
		}


	}
	};
}
