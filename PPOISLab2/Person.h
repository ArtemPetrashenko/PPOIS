#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person {
protected:
    std::string name;
    std::string contactInfo;

public:
    Person(const std::string& _name, const std::string& _contactInfo);
    virtual ~Person() = default;

    std::string getName() const;
    std::string getContactInfo() const;
};

#endif