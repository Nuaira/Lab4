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

	string title1, name1, comment1;

public:

	void RedBloodCell();
	void WhiteBloodCell();
	void Platelets();
	void Hemoglobin();
	void Hematocrit();
	void MeanCorpuscularVolume();
	void annotation1();

};

class BloodGlucose: public BloodTests{	// Derived Class 2

protected:

	int PlasmaGnumber;

	string title2, name2, comment2;

public:

	void PlasmaGlucose();
	void annotation2();

};

class Lipoprotein: public BloodTests{	// Derived Class 3

protected:

	int TotalCholesterolNumber;
	int LDLNumber;
	int HDLNumber;

	string title3, name3, comment3;

public:

	void TotalCholesterol();
	void LDL();
	void HDL();
	void annotation3();

};

#endif /* BLOODTESTS_HPP_ */
