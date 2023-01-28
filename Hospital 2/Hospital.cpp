#include "Hospital.h"
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <stdio.h>

Hospital::Hospital( std::vector<std::string>& hospital_illness) : _hospital_illness(hospital_illness), _counter(0), _idpatients(1) {}



  void Hospital::addPatients(Patient& other_patient) {   
      std::cout << "В больницу поступил пациент\nИмя: " << other_patient.getName() << "  Диагноз: " << other_patient.getIllness() << std::endl; ;
      _patients.emplace(_idpatients, other_patient);
    _idpatients++;
}
  void Hospital::printAllPatients() {
        std::cout << "Список пациентов : \n";
      for (const auto& [_idpatients, other_patient] : _patients) {
          std::cout << " Id: " << _idpatients << "   Имя: " << other_patient.getName() << std::endl;
      }
  }


  void Hospital::sentHospital(int idpatients) {
      _patients.erase(idpatients);
      std::cout << "Пациента за номером Id " << idpatients << " перевели в другую больницу.\n";
  }

  void Hospital::operation(int idpatients) {
      int count = 0;
      const auto _it = _patients.find(idpatients);
      for (size_t i = 0; i < _hospital_illness.size(); i++) {
          if (_it->second.getIllness() == _hospital_illness[i]) {
              std::cout << "Пациент " << _it->second.getName() << " с диагнозом " << _it->second.getIllness() << " направлен на операцию." << std::endl;
              count++;
          }
      }
      if (count == 0) {
          std::cout << "Такое заболевание  " << _it->second.getIllness() << " больница не лечит.\nПациент " << _it->second.getName() << " будет направлен в другую больницу.\n";
          sentHospital(_it->first);
      }

  }

  void Hospital::erasePatient(int idpatients) {
      std::cout << "Пациент " << "Id: " << idpatients << " выписан\n" << std::endl;


      _patients.erase(idpatients);
  }


