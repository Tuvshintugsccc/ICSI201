#include <iostream>
using namespace std;

// Лаб 1)
// 5. Гараас өгөгдсөн N ширхэг тооны нийлбэр, үржвэрийг ол.

int main(){
    int n, x, sum = 0, multiply = 1;

    cin >> n;
    // Гараас нийт хэдэн тоо авахыг оруулж өгнө.

    for(int i = 0; i < n; i++){
        cin >> x;
        // Гараас тоонуудыг авна.
        sum = x + sum;
        // Гараас авсан тоонуудыг өмнөх тоонуудтайгаа нэмж байна.
        multiply = x * multiply;
        // Гараас авсан тоонуудаа үржиж байна.
    }


    cout << "Niilber: " << sum << endl;
    // Олсон нийлбэрийг хэвлэнэ.
    cout << "Urjver: " << multiply;
    // Олсон үржвэрийг хэвлэнэ.

    return 0;
}