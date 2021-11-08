#include<iostream>
class Person {
public:
	void set_name(std::string name) { m_name = name; }
	void set_mail(std::string e_mail_address) {
		m_e_mail_address = e_mail_address;
	}
	void set_age(int age) { m_age = age; }
	auto get_name(std::string name) { return name; }
	auto get_mail(std::string e_mail){ return e_mail; }
	auto get_age(int age) { return age; }
	Person() {};
	Person& operator=(Person& pe) {
	if(this==&pe){return *this;}
		this->m_name = pe.m_name;
		this->m_e_mail_address = pe.m_e_mail_address;
		this->m_age = pe.m_age;
	return *this
	}
	Person(Person& p) {
		this->m_name = p.m_name;
		this->m_e_mail_address = p.m_e_mail_address;
		this->m_age = p.m_age;

	}
	~Person();
	
private:
	std::string m_name;
	std::string m_e_mail_address;
	int m_age;
};

int main() {
	Person numberOne;
	Person numberTwo;



}


struct Person {
	const char* m_name;
	const char* m_e_mail_address;
	int m_age;

};

Person* operator=(Person* p) {
	if (this == &pe) { return *this; }
	this->m_name = p.m_name;
	this->m_e_mail_address = p.m_e_mail_address;
	this->m_age = p.m_age;
	return *this

}
Person() {
	m_name = " ";
	m_e_mail_address = " ";
	m_age = 0;
}
Person(char* name, char* e_mail_address, int age) {
	  m_name = name
      m_e_mail_address = e_mail_address;
	  m_age = age;
}
  void destroyMyStruct(person*) { delete Person; }
void person_setCoordinates(Person*name) {
	this->name = m_name;

}
void person_setCoordinates1(Person* e_mail_address) {

	this->e_mail_address = m_e_mail_address;
}
void person_setCoordinates2(Person* age) {
	this->age = m_age;

}
const char* person_getXCoordinates( Person* name) {
	return name->m_name;
}

const char* person_getYCoordinates1(Person* e_mail_address) {
	return e_mail_address->m_e_mail_address;
}

int person_getYCoordinates2(Person* age) {

	return age->m_age;
}

int main() {
	
	Person pers;

}