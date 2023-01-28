#pragma once
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <utility>
#include <stdio.h>
#include "Patient.h"

class Hospital
{
public:
	Hospital( std::vector<std::string>& hospital_illness);

	void addPatients(Patient& other_patient);
	void printAllPatients();
	void sentHospital(int idpatients);
	void operation(int idpatients);
	void erasePatient(int idpatients);
	
	
	

private:
	std::map<int, Patient> _patients;
	std::map<int, Patient>::iterator _it;
	std::vector<std::string>& _hospital_illness;
	int _idpatients;
	int _counter;
	
	
};

