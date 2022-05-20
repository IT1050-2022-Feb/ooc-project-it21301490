#include <iostream>
#include "Medical_Report.h"
#include <cstring>
using namespace std;

Medical_Report::Medical_Report()
{
	strcpy(reportID, "");
  patient = new Patient("", "", "" , "", 0, 0);
}

Medical_Report::Medical_Report(const char pReportID[], const char pEmail[], const char pName[], const char pNIC[], const char pPatientID[], float pHeight, float pWeight)
{
	strcpy(reportID, pReportID);
  patient = new Patient(pEmail, pName, pNIC, pPatientID, pHeight, pWeight);
}

void Medical_Report::displayDetails()
{
	cout << "Report ID : " << reportID << endl
       << "Report Owner Details" << endl;
  patient->displayDetails();
}
