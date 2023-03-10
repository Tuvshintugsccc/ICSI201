#include <iostream>
using namespace std;

// Лаб 1)
// 10. Өгөгдсөн тоо анхны тоо эсэхийг шалга.

int isPrime(int n){
    // Анхны тоо мөн эсэхийг шалгах функцыг зарлана.
    if(n <= 1){
        return 0;
    }
    // Хэрвээ өгөгдсөн тоо 1 болон түүнээс бага байвал 0-ийг буцаана.
    // Учир нь 1 болон 0 нь анхны тоо биш.

    for(int i = 2; i <= n/2; i++){
    // Өгөгдсөн тоог хуваадаг тоонуудыг шалгана.
        if(n % i == 0){
            return 0;
            // Хэрвээ өгөгдсөн тоо ямар нэгэн тоонд үлдэгдэлгүй хуваагдаж байвал анхны тоо биш.
            // Тиймээс анхны тоо биш гэж үзэн 0-ийг буцаана.
        }
    }

    return 1;
    // Харин эсрэгээрээ буюу ямар нэгэн тоонд хуваагдахгүй байвал 1-ийг буцаана.
    // Энэ нь тус тоо анхны тоо мөн гэсэн үг.
}

int main(){
    int num;
    cin >> num;
    // Өгөгдсөн тоо гэсэн учир өөрөө дур мэдэн нэг тоог оноож өгөв.

    int result = isPrime(num);

    // Дээрх фунцкийн үр дүнг result хүснэгтэд хадгална.

    if(result == 1){
    //
        cout << num << " Anhnii too" << endl;
    }
    else{
        cout << num << " Anhnii too bish";
    }
    // Үр дүнгүүдээ хэвлэнэ.
}