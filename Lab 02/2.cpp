#include <iostream>

using namespace std;

int main(){
    int a = 125; // Бүхэл тоог хувьсагч зарлаж, 125 гэсэн утга өгч байна.
    int *p = &a; // Pointer төрлийн р хувьсагч зарлан, а хувьсагчийн хаягийг өгч байна.

    cout<<p<<endl; // р хаяган хувьсагчийг буюу а-ийн хаягийг хэвлэж байна.
    cout<<*p<<endl; // р хаяган хувьсагчид хадгалагдаж байгаа а хувьсагчийг хаягаар нь дамжуулан хэвлэж байна.

    p++; // р хаяган хувьсагчийг нэгээр нэмэгдүүлэх буюу дараачийн 4 byte хаягруу нэмэн, шилжүүлж байна.
    cout<<p<<endl; // 4 байтаар нэмэгдэн, шилжсэн р-ийн хаягийн утгыг хэвлэж байна.
    cout<<*p<<endl; // р хаяган хувьсагчид байгаа утгад оноогдсон утгыг хэвлэж байна.
}