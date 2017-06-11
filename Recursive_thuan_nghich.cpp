#include <iostream>
#include <cstdlib>

using namespace std;
//In các giá trị trong mảng theo thứ tự thuận hay nghịch bằng đệ quy
/*
 
 */
void thuan(int mang[],int sl){
    if (sl >= 0){
        thuan(mang, sl-1);
        cout << mang[sl] << " ";
    }
}
void nghich(int mang[],int sl){
    if (sl >= 0){
        cout << mang[sl] << " ";
        nghich(mang, sl-1);
    }
}
int main(int argc, char** argv) {
    int sl = 0;
    cout << "Nhap so luong phan tu mang: ";
    cin >> sl;
    cin.ignore();
    int* mang = new int[sl]; // tao mang dong
    cout << "Nhap phan tu mang: ";
    for(int i=0; i<sl; i++){
        cin >> mang[i];
    }
    cin.ignore();
    thuan(mang,sl-1);
    cout << endl;
    nghich(mang,sl-1);

    return 0;
}

