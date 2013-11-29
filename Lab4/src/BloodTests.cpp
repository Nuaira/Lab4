/*
 * BloodTests.cpp
 *
 *  Created on: Nov 19, 2013
 *      Author: n36moham
 */
#include <iostream>
#include "BloodTests.hpp"
#include <string>
#include <time.h>
#include <cstdlib>

using namespace std;

// make annotation!!!

BloodTests::BloodTests(){

	gender = 0;

	cout << "Please enter patient's first name:" << endl;
	cin >> firstname;

	cout << "Please enter patient's last name:" << endl;
	cin >> lastname;

	cout << "Enter the patient's gender. Press 1 for Female. Press 2 for Male." << endl;
	cin >> gender;

}

// Functions related to Complete Blood Count

void BloodCount::RedBloodCell(){

	srand(time(NULL));
	rbcnumber = rand() % 8 + 3;

	cout << "The Red blood cell count is:"  << rbcnumber << "million cells/mcL" << endl;

	if (gender == 1 && (rbcnumber >= 4 && rbcnumber <= 5)){
	cout << "The result is within normal range." << endl;
	}
	else{
	cout << "The result is not within normal range." << endl;
	}

	if (gender == 2 && (rbcnumber >= 5 && rbcnumber <= 6)){
	cout << "The result is within normal range." << endl;
	}
	else{
	cout << "The result is not within normal range." << endl;
	}

}

void BloodCount::WhiteBloodCell(){

	srand(time(NULL));
	wbcnumber = rand() % 11000 + 3500;

	cout << "The White blood cell count is:"  << wbcnumber << "cells/mcL" << endl;

	if ((wbcnumber >= 4500 && wbcnumber <= 10000)){
	cout << "The result is within normal range." << endl;
	}
	else{
	cout << "The result is not within normal range." << endl;
	}

}

void BloodCount::Platelets(){

	srand(time(NULL));
	pnumber = rand() % 500000 + 130000;

	cout << "The Platelet count is:"  << pnumber << "cells/mcL" << endl;

	if ((pnumber >= 140000 && pnumber <= 450000)){
	cout << "The result is within normal range." << endl;
	}
	else{
	cout << "The result is not within normal range." << endl;
	}

}

void BloodCount::Hemoglobin(){

	srand(time(NULL));
	hemonumber = rand() % 18 + 10;

	cout << "The Hemoglobin count is:"  << hemonumber << "gm/dL" << endl;

	if (gender == 1 && (hemonumber >= 12 && hemonumber <= 15)){
	cout << "The result is within normal range." << endl;
	}
	else{
	cout << "The result is not within normal range." << endl;
	}

	if (gender == 2 && (hemonumber >= 14 && hemonumber <= 17)){
	cout << "The result is within normal range." << endl;
	}
	else{
	cout << "The result is not within normal range." << endl;
	}

}

void BloodCount::Hematocrit(){

	srand(time(NULL));
	hemanumber = rand() % 60 + 30;

	cout << "The Hematocrit value is:"  << hemanumber << "%" << endl;

	if (gender == 1 && (hemanumber >= 36 && hemanumber <= 44)){
	cout << "The result is within normal range." << endl;
	}
	else{
	cout << "The result is not within normal range." << endl;
	}

	if (gender == 2 && (hemanumber >= 41 && hemanumber <= 50)){
	cout << "The result is within normal range." << endl;
	}
	else{
	cout << "The result is not within normal range." << endl;
	}

}

void BloodCount::MeanCorpuscularVolume(){

	srand(time(NULL));
	volumenumber = rand() % 99 + 75;

	cout << "The Mean Corpuscular Volume is:"  << volumenumber << "femtoliter" << endl;

	if ((volumenumber >= 80 && volumenumber <= 95)){
	cout << "The result is within normal range." << endl;
	}
	else{
	cout << "The result is not within normal range." << endl;
	}

}

// Function related to Blood Glucose

void BloodGlucose::PlasmaGlucose(){

	srand(time(NULL));
	PlasmaGnumber = rand() % 135 + 70;

	cout << "The Plasma Glucose result is:"  << PlasmaGnumber << "mg/dL" << endl;

	if ((PlasmaGnumber >= 70 && PlasmaGnumber <= 99)){
	cout << "The diagnosis is: Normal" << endl;
	}
	else if ((PlasmaGnumber >= 100 && PlasmaGnumber <= 125)){
	cout << "The diagnosis is: Prediabetes" << endl;
	}
	else if (PlasmaGnumber >= 126){
	cout << "The diagnosis is: Diabetes" << endl;
	}
}

// Functions related to Lipoprotein

void Lipoprotein::TotalCholesterol(){

	srand(time(NULL));
	TotalCholesterolNumber = rand() % 260 + 180;

	cout << "The Total Cholesterol Level is:"  << TotalCholesterolNumber << "mg/dL" << endl;

	if (TotalCholesterolNumber < 200){
	cout << "The total cholesterol category is: Desirable" << endl;
	}
	else if ((TotalCholesterolNumber >= 200 && TotalCholesterolNumber <= 239)){
	cout << "The total cholesterol category is: Borderline high" << endl;
	}
	else if (TotalCholesterolNumber >= 240){
	cout << "The total cholesterol category is: High" << endl;
	}

}

void Lipoprotein::LDL(){

	srand(time(NULL));
	LDLNumber = rand() % 220 + 90;

	cout << "The LDL Cholesterol Level is:"  << LDLNumber << "mg/dL" << endl;

	if (LDLNumber < 100){
	cout << "The LDL cholesterol category is: Optimal" << endl;
	}
	else if ((LDLNumber >= 100 && LDLNumber <= 129)){
	cout << "The LDL cholesterol category is: Near optimal/above optimal" << endl;
	}
	else if (LDLNumber >= 130 && LDLNumber <= 159){
	cout << "The LDL cholesterol category is: Borderline high" << endl;
	}
	else if (LDLNumber >= 160 && LDLNumber <= 189){
	cout << "The LDL cholesterol category is: High" << endl;
	}
	else if (LDLNumber >= 190){
	cout << "The LDL cholesterol category is: Very high" << endl;
	}

}

void Lipoprotein::HDL(){

	srand(time(NULL));
	HDLNumber = rand() % 70 + 30;

	cout << "The Total Cholesterol Level is:"  << HDLNumber << "mg/dL" << endl;

	if (HDLNumber < 40){
	cout << "The total cholesterol category is: A major risk factor for heart disease" << endl;
	}
	else if ((HDLNumber >= 40 && HDLNumber <= 59)){
	cout << "The total cholesterol category: The higher, the better" << endl;
	}
	else if (HDLNumber >= 60){
	cout << "The total cholesterol category: Considered protective against heart disease" << endl;
	}

}


