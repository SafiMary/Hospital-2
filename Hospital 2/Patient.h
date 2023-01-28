#pragma once
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <utility>
#include <stdio.h>
class Patient {
	
	public:
		Patient(const std::string& name, int age, const std::string& illness);
		~Patient();
		const std::string getName()const;
		const std::string getIllness()const;
		void setName(std::string name);
		void setIllness(std::string illness);
		void setAge(int age);
	private:
		std::string _name;
		int _age;
		std::string _illness;
		
	};
