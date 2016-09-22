#include <iostream>
#include <string>

using namespace std;

int main()
{
    int no, half, i=0;
    cin >> no;
    string st;
    getline(cin, st);
    while(i<no){
            getline(cin, st);
            half = st.length()/2;
            int j = 0;
            while(j<half){
                cout << st[j];
                j = j+2;
            };
            cout << endl;
            i++;
    };
    return 0;
}
