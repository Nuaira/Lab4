/*
 * Main.cpp
 *
 *  Created on: Nov 28, 2013
 *      Author: n36moham
 */
#include <iostream>
#include "BloodTests.hpp"
#include <string>
#include <time.h>
#include <cstdlib>

using namespace std;

int main(){

	BloodTests oname;
	BloodCount objectname;
	BloodGlucose objectname2;
	Lipoprotein objectname3;

	oname.Information();

	objectname.RedBloodCell();

	objectname.WhiteBloodCell();

	objectname.Platelets();

	objectname.Hemoglobin();

	objectname.Hematocrit();

	objectname.MeanCorpuscularVolume();

	objectname.annotation1();


	objectname2.PlasmaGlucose();

	objectname2.annotation2();


	objectname3.TotalCholesterol();

	objectname3.LDL();

	objectname3.HDL();

	objectname3.annotation3();


	return 0;
}
