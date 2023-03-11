#include <string.h>

#include <iostream>

using namespace std;

class Worker {
    // Гишүүн өгөгдөл зарлана
    private:
        int id;            // Ажилтаны дугаар
        char name[20];     // Ажилтаны нэр
        char position[10]; // Ажилтаны албан тушаал
        float workedHours; // Ажилтаны ажилласан цаг
    // Гишүүн функц зарлах
    public:
        Worker() {
            id = 0;
            strcpy(name, "");
            strcpy(position, "Ajiltan");
            workedHours = 0;
        };

        void get_information() {
            cout << "Ajiltanii dugaariig oruulna uu" << endl;
            cin >> id;
            cout << "Ajiltanii neriig oruulna uu" << endl;
            cin >> name;
            cout << "Ajiltanii alban tushaaliig oruulna uu" << endl;
            cin >> position;
            cout << "Ajiltanii ajillasan tsagiig oruulna uu" << endl;
            cin >> workedHours;
        };

        void put_information() {
            cout << "Ajiltanii dugaar: " << id << endl;
            cout << "Ajiltanii ner: " << name << endl;
            cout << "Ajiltanii alban tushaal: " << position << endl;
            cout << "Ajiltanii ajillasan tsag: " << workedHours << endl;
        };

        float calc_salary() {
            float salary = workedHours * 200;
            string str1 = "Zahiral";
            if (position == str1) {
                salary = calc_ceo_salary(salary);
            }
            return salary;
        };

        float calc_ceo_salary(float n) {
            return n += 8000;
        };

        bool add_workedHours(float hour) {
            if (hour > 0 && hour <= 24) {
                workedHours += hour;
                return true;
            } else
                return false;
        };
};

int main() {
    Worker employee;
    employee.get_information();
    cout << endl << "Ajiltanii medeelel" << endl;
    employee.put_information();
    cout << endl << "Tsalin: " << employee.calc_salary() << endl;
    employee.add_workedHours(6);
    cout << endl << "Ajillasan tsagiig nemsniii daraa: " << endl;
    employee.put_information();

    return 0;
}