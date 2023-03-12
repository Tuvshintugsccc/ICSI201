#include <iostream>
#include <string.h>

using namespace std;

class Employee{
    // Гишүүн өгөгдөл зарлана
    private:
        int id; // Дугаар
        char name[20]; // Нэр
        char position[10]; // Албан тушаал
        float hours; // Ажилласан цаг
        
    // Гишүүн функц зарлах
    public:
        Employee(){
            id = 0;
            strcpy(name, "");
            strcpy(position, "Ajiltan");
            hours = 0;
        };

        void input_info(){
            cout << "Dugaar: ";
            cin >> id;
            cout << "Ner: ";
            cin >> name;
            cout << "Tushaal: ";
            cin >> position;
            cout << "Tsag: ";
            cin >> hours;
        };

        void display_info(){
            cout << "Dugaar: " << id << endl;
            cout << "Ner: " << name << endl;
            cout << "Tushaal: " << position << endl;
            cout << "Tsag: " << hours;
        };

        float calc_salary(){
            float salary = hours * 200;
            string str1 = "Zahiral";
            if (position == str1) {
                salary = calc_ceo_salary(salary);
            }
            return salary;
        };

        float calc_ceo_salary(float n){
            return n += 8000;
        };

        bool add_hours(float hour){
            if (hour > 0 && hour <= 24) {
                hours += hour;
                return 1;
            } else
                return 0;
        };
};

int main() {
    Employee employee;
    employee.input_info();
    cout << endl << "Ajiltanii medeelel" << endl;
    employee.display_info();
    cout << endl << "Tsalin: " << employee.calc_salary() << endl;
    employee.add_hours(6);
    cout << endl << "Ajillasan tsagiig nemsniii daraa: " << endl;
    employee.display_info();

    return 0;
}