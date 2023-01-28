#include "Patient.h"
#include <iostream>
#include <string>
#include <map>
#include <utility>
#include <vector>
#include <stdio.h>


Patient::Patient(const std::string& name,int age, const std::string& illness):
_name(name), _age(age), _illness(illness) {}
Patient::~Patient(){}

const std::string  Patient::getName() const {
    return _name;
}


const std::string  Patient::getIllness() const {
    return _illness;
}


void Patient::setName(std::string name) {
    _name = name;
}
void Patient::setIllness(std::string illness) {
    _illness = illness;
}
void Patient::setAge(int age) {
    _age = age;
}

