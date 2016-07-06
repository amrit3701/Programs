#include <iostream>
#include <string>
using namespace std;
int main(){
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, j = 0, k = 0; 
    string s;
    cin >> s;
    int l = s.length();
    for(int i = 0; i < l; i++){
        if (s[i]  == '0'){
            a++; }
        else if (s[i] == '1'){
            b++; }
        else if (s[i] == '2'){
            c++; }
        else if (s[i] == '3'){
            d++; }
        else if (s[i] == '4'){
            e++; }
        else if (s[i] == '5'){
            f++; }
        else if (s[i] == '6'){
            g++; }
        else if (s[i] == '7'){
            h++; }
        else if (s[i] == '8'){
            j++; }
        else if (s[i] == '9'){
            k++; }
    }
    cout << "0 " << a << endl;
    cout << "1 " << b << endl;
    cout << "2 " << c << endl;  
    cout << "3 " << d << endl;
    cout << "4 " << e << endl;
    cout << "5 " << f << endl;  
    cout << "6 " << g << endl;
    cout << "7 " << h << endl;
    cout << "8 " << j << endl;  
    cout << "9 " << k << endl;

    return 0;
}
