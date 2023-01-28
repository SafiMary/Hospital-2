#include "Hospital.h"
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <stdio.h>

Hospital::Hospital( std::vector<std::string>& hospital_illness) : _hospital_illness(hospital_illness), _counter(0), _idpatients(1) {}



  void Hospital::addPatients(Patient& other_patient) {   
      std::cout << "� �������� �������� �������\n���: " << other_patient.getName() << "  �������: " << other_patient.getIllness() << std::endl; ;
      _patients.emplace(_idpatients, other_patient);
    _idpatients++;
}
  void Hospital::printAllPatients() {
        std::cout << "������ ��������� : \n";
      for (const auto& [_idpatients, other_patient] : _patients) {
          std::cout << " Id: " << _idpatients << "   ���: " << other_patient.getName() << std::endl;
      }
  }


  void Hospital::sentHospital(int idpatients) {
      _patients.erase(idpatients);
      std::cout << "�������� �� ������� Id " << idpatients << " �������� � ������ ��������.\n";
  }

  void Hospital::operation(int idpatients) {
      int count = 0;
      const auto _it = _patients.find(idpatients);
      for (size_t i = 0; i < _hospital_illness.size(); i++) {
          if (_it->second.getIllness() == _hospital_illness[i]) {
              std::cout << "������� " << _it->second.getName() << " � ��������� " << _it->second.getIllness() << " ��������� �� ��������." << std::endl;
              count++;
          }
      }
      if (count == 0) {
          std::cout << "����� �����������  " << _it->second.getIllness() << " �������� �� �����.\n������� " << _it->second.getName() << " ����� ��������� � ������ ��������.\n";
          sentHospital(_it->first);
      }

  }

  void Hospital::erasePatient(int idpatients) {
      std::cout << "������� " << "Id: " << idpatients << " �������\n" << std::endl;


      _patients.erase(idpatients);
  }


