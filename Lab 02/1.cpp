#include <iostream>

using namespace std;

int main(){
    char *p1; // char төрлийн р1 заагч зарлаж байна.
    int *p2; // int төрлийн p2 заагч зарлаж байна.
    double *p3; // double төрлийн p3 заагч зарлаж байна.

    cout << sizeof(p1) << endl << sizeof(p2) << endl << sizeof(p3);
    /*  
        Дээрх кодыг ажиллуулсны үр дүнд 4 4 4 гэсэн үр дүн гарсан. 
        Учир нь заагчийн хувьсагч нь char, int, double, float гэх мэтчилэн өгөгдлийн төрлөөсөө үл хамаардаг. Тиймээс тухайн үйлдлийн системээс хамаарч өөр өөр санах ойг эзлэдэг. 

        Туршиж үзсэн компьютер маань 64 бит байсан боловч MinGW Installer-аа 32 бит сонгочихсон учраас 4 byte гэсэн үр дүнгүүдийг гаргажээ.
        Харин online платформууд ашиглах үед 8 8 8 byte гэсэн үр дүнгүүдийг гаргаж байна.
    */
}