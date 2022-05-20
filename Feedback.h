#pragma once
#include <iostream>
#include "Patient.h"
using namespace std;

class Feedback
{
private:
    char feedbackID[8];

    Patient * user;

public:
    Feedback();
    Feedback(const char pFeedbackID[], const char pEmail[], const char pName[], const char pNIC[], const char pPatientID[], float pHeight, float pWeight);
    void setFeedbackID(char pFeedback);
    char getFeedbackID();
    void displayDetails();

};


