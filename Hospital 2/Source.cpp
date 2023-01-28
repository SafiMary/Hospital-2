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

	std::vector<std::string> _hospital_illness = { "allergy","anaemia", "asthma", "autism", "gastritis" };//������ ��������, ������� ����� ��������
	Hospital a(_hospital_illness);//������� ��������
	Patient b("�������", 34, "allergy");//������� ��������
	Patient c("���������", 84, "anaemia");
	Patient f("��������", 56, "asthma");
	Patient d("��������", 26, "auti");
	a.addPatients(b);//�������� ��������
	a.addPatients(c);
	a.addPatients(f);
	a.addPatients(d);
	a.printAllPatients();//������ �� ����� ���� ���������
	a.sentHospital(1);//�������� �������� � ������ ��������
	a.operation(2);//������� �������� ��������
	a.operation(4);//������� �������� ��������
	a.erasePatient(3);//�������� ��������
	a.printAllPatients();


}