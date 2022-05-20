#include <iostream>
#include "Feedback.h"
#include <cstring>
using namespace std;

Feedback::Feedback()
{
	strcpy(feedbackID, "");
  user = new Patient("", "", "", "", 0, 0);
}

Feedback::Feedback(const char pFeedbackID[], const char pEmail[], const char pName[], const char pNIC[], const char pPatientID[], float pHeight, float pWeight)
{
	strcpy(feedbackID, pFeedbackID);
  user = new Patient(pEmail, pName, pNIC, pPatientID, pHeight, pWeight);

}

void Feedback::displayDetails()
{
	cout << "Feedback ID : " << feedbackID << endl
       << "Feedback Writer Details" << endl;
  user->displayDetails();
  cout << endl << endl;
  
}
