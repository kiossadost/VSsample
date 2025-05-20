#include <iostream>
#include <windows.h>
using namespace std;
#define N endl;


class Game {
    public:
        char* title;
        char* publisher;
        char* developer;
        double price;
        int releaseYear;


    void printinfo() {
        cout << "Title:" << title << N;
        cout << "Publisher:" << publisher << N;
        cout << "Developer:" << developer << N;
        cout << "Price:" << price << N;
        cout << "Release year:" << releaseYear << N;
    };

};

class Animal {
private:
    char* nickname;
    int age;
public:
    char* GetNickname() {
        return nickname;
    }
    int GetAge() {
        return age;
    }

    void SetNickname(char* value) {
        nickname = value;
    }
    void SetAge(int value) {
        age = value;
    }
    
    void MakeSound() {
        cout << "OlalaOlele" << N;
    }
};

class Dog : public Animal {
private:
    char* breed;
public:
    char* GetBreed() {
        return breed;
    }
    void SetBreed(char* value) {
        breed = value;
    }

    void MakeSound() {
        cout << "meow" << N;
    }
};

class Cat : public Animal {
public:
    void MakeSound() {
        cout << "bark" << N;
    }
};


class Student {
private:
    char FullName[100];
    
    char BirthDate[8];
    char ContactNumber[14];

    char Country[25];
    char City[25];

    char University_name[50];
    char UniversityCountry[50];

    char Group[5];
public:
    // введення
    void InputData() {
        cout << "Enter full name: ";
        cin.getline(FullName, 100);
    
        cout << "Enter birth date: ";
        cin.getline(BirthDate, 8);
    
        cout << "Enter contact number";
        cin.getline(ContactNumber, 14);
    
        cout << "Enter country: ";
        cin.getline(Country, 25);
    
        cout << "Enter city: ";
        cin.getline(City, 25);
    
        cout << "Enter university name: ";
        cin.getline(University_name, 50);
    
        cout << "Enter university country: ";
        cin.getline(UniversityCountry, 50);
    
        cout << "Enter group: ";
        cin.getline(Group, 5);
    }
    // виведення
    void OutputData() {
        cout << "Student Full Name: " << FullName << N;
        cout << "Student Birth Date:" << BirthDate << N;
        cout << "Student Contact Number: " << ContactNumber << N;
        cout << "Student Country: " << Country << N;
        cout <<"Student City: " << City << N;
        cout << "University name: " << University_name << N;
        cout << "University Country: " << UniversityCountry << N;
        cout << "Group: " << Group << N;
    }
        // aксесори
    
    char* GetFullName() {
        return FullName;
    }
    char* GetBirthDate() {
        return BirthDate;
    }
    char* GetContactNumber() {
        return ContactNumber;
    }
    char* GetCountry() {
        return Country;
    }
    char* GetCity() {
        return City;
    }
    char* GetUniversity_name() {
        return University_name;
    }
    char* GetUniversityCountry() {
        return UniversityCountry;
    }
    char* GetGroup() {
        return Group;
    }

    void SetFullName(char* value) {
        strcpy_s(FullName, 100, value);
    }char* SetBirthDate(char* value) {
        BirthDate = value;
    }char* SetContactNumber(char* value) {
        ContactNumber = value;
    }char* SetCountry(char* value) {
        Country = value;
    }char* SetCity(char* value) {
        City = value;
    }char* SetUniversity_name(char* value) {
        University_name = value;
    }char* SetUniversityCountry(char* value) {
        UniversityCountry = value;
    }char* SetGroup(char* value) {
        Group = value;
    }


};


int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    




}
