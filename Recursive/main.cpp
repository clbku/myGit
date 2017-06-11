#include <iostream>
#include <cstdlib>

using namespace std;
//a) Tính tổng và tích các phần tử trong mảng
int sum(int mang[], int sl){
    if (sl == 1) return mang[0];
    else return sum(mang, sl-1)+mang[sl-1];
};
int multi(int mang[], int sl){
    if (sl == 1) return mang[0];
    else return multi(mang,sl-1)*mang[sl-1];
}
int main(int argc, char** argv) {
    int sl;
    cout << "Nhap so luong phan tu mang: "; 
    cin >> sl;
    cin.ignore();
    int* mang = new int[sl];
    cout << "Nhap phan tu mang: ";
    for (int i=0; i<sl; i++){
        cin >> mang[i];
    }
    cin.ignore();
    cout << "Tong la: " << sum(mang, sl) << endl;
    cout << "Tich la: " << multi(mang, sl) << endl;

    return 0;
}

