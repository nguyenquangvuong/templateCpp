//Tempalte - khuon mau: du lieu truu tuong tong quat cho cac kieu du lieu
//Template bao gom: function template va class template
//Templae giup dinh nghia tong quat cho ham va lop thay vi phai nap chong(overloading)
/*
    template <class T>
T someFunction(T arg1, ...)
{
   ...
}
*/
#include <bits/stdc++.h>

using namespace std;

//Su dung dinh nghia cho 1 kieu dl
template <class T_gtri>
void daoVitri(T_gtri &a, T_gtri &b){
    T_gtri temp;
    temp = a;
    a = b;
    b = a;
}

//Cach thuc dinh nghia cho 2 kieu dl
template <class T_dl1, class T_dl2>
void cong(T_dl1 k_nguyen, T_dl2 k_thuc){
    cout<<"Sum = "<<k_nguyen+k_thuc<<endl;
}


int main(){
    int ng_A = 2, ng_B = 3;
    double th_A = 4.5, thuc_B = 5.5;
    string str_A = "cVuong", str_B = "vHuong";

    daoVitri(str_A, str_B);
    std::cout<< "str_A = "<<str_A<<" va str_B = "<<str_B<<endl;

    cong(ng_A, thuc_B);
}

/*
Output:
str_A = vHuong va str_B = vHuong
Sum = 7.5
*/