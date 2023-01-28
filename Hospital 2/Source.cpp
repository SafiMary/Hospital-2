#include "Hospital.h"
#include "Patient.h"
#include <iostream>
#include <string>
#include <map>
#include <windows.h>
#include <vector>
#include <stdio.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::vector<std::string> _hospital_illness = { "allergy","anaemia", "asthma", "autism", "gastritis" };//список болезней, которые лечит больница
	Hospital a(_hospital_illness);//создали больницу
	Patient b("ƒмитрий", 34, "allergy");//создали пациента
	Patient c("≈катерина", 84, "anaemia");
	Patient f("≈влампий", 56, "asthma");
	Patient d("√еннадий", 26, "auti");
	a.addPatients(b);//добавили пациента
	a.addPatients(c);
	a.addPatients(f);
	a.addPatients(d);
	a.printAllPatients();//вывели на экран всех пациентов
	a.sentHospital(1);//перевели пациента в другую больницу
	a.operation(2);//провели операцию пациенту
	a.operation(4);//провели операцию пациенту
	a.erasePatient(3);//выписали пациента
	a.printAllPatients();


}