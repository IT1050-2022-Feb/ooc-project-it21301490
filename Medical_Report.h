#pragma once
#include <iostream>
#include "Patient.h"
using namespace std;

class Medical_Report
{
private:
    char reportID[8];
    Patient * patient;
    

public:
    Medical_Report();
    Medical_Report(const char pReportID[], const char pEmail[], const char pName[], const char pNIC[], const char pPatientID[], float pHeight, float pWeight);
    void setReportID(char pReportID);
    char getReportID();
    void displayDetails();

};


