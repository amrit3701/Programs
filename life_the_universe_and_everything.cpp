#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a;
    vector <int> lists;
    do{
        cin >> a;
        lists.push_back(a);
    }while (a!=42);

    for(vector<int>::iterator i=lists.begin(); i<(lists.end()-1); i++){
        cout << *i << "\n";
}
    return 0;
}
