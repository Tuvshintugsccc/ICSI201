#include <iostream>
using namespace std;

// Лаб 1)
// 1. a, b, c гурван тооны хамгийн ихийг олж дэлгэцэнд хэвэл.

int main() {
	int a, b, c, max;
    // Гараас авах 3 тооны хувьсагч болон хамгийн
	// их тоог нь хадгалах хувьсагчийг зарлаж өгч байна.
	
	cin >> a >> b >> c;
	// Хамгийн ихийг нь олох 3 тоогоо гараас авна.

	if(a > b && a > c){
	// if нөхцөл болон логик үйлдэл && нарыг ашиглан a тоо нь b болон c тоонуудаас их эсэхийг шалгана.

		max = a;
		// хэрэв а тоо нь b, c тоонуудаас их байвал max хувьсагчид хадгалж өгнө.
	}	else if (b > c){
		// Харин дээрх нөхцөл хангагдаагүй үед else if-ийг ашиглан b тоо c-ээс их байгаа эсэхийг шалгана.
		max = b;
		// b тоо нь c-ээс их гэсэн тохиолдолд b-ийн утгыг max хувьсагчдаа оноож өгч хадгална.
	}	else{
		max = c;
		// Дээрх бүх нөхцөл хангагдаагүй бол c нь хамгийн их тоо болох учир max гэсэн хувьсагчид c хадгалж өгнө.
	}
	
	cout << "Hamgiin ih: " << max;
	// Олсон хамгийн их утгаа харуулж байна.

	return 0;
}