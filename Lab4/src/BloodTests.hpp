/*
 * BloodTests.hpp
 *
 *  Created on: Nov 19, 2013
 *      Author: n36moham
 */

#ifndef BLOODTESTS_HPP_
#define BLOODTESTS_HPP_

#include <iostream>
#include <string>

using namespace std;

class BloodTests{	// Base Class

protected:

	string firstname;
	string lastname;

	int gender;

public:

	BloodTests();	// Constructor
	void Information();

};

class BloodCount:public BloodTests{	// Derived Class 1

protected:

	// variables for each blood count test
	int rbcnumber;
	int wbcnumber;
	int pnumber;
	int hemonumber;
	int hemanumber;
	int volumenumber;

public:

	void RedBloodCell();
	void WhiteBloodCell();
	void Platelets();
	void Hemoglobin();
	void Hematocrit();
	void MeanCorpuscularVolume();

};

class BloodGlucose: public BloodTests{	// Derived Class 2

protected:

	int PlasmaGnumber;

public:

	BloodGlucose();
	void PlasmaGlucose();

};

class Lipoprotein: BloodTests{	// Derived Class 3

protected:

	int TotalCholesterolNumber;
	int LDLNumber;
	int HDLNumber;

public:

	Lipoprotein();
	void TotalCholesterol();
	void LDL();
	void HDL();

};

#endif /* BLOODTESTS_HPP_ */
