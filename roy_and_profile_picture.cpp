#include<iostream>
#include<vector>
using namespace std;

int main(){
    int l, w, h, i, j, n;
    cin>>l;
    cin >> n;

    j = n*2;
    int arr[j];
    i=1;
    while(i <= j){
        cin >> w;
        cin >> h;
        arr[i] = w;
        arr[i+1] = h;
        i = i+2;
     }

    i=1;
    while(i<=j){
        w = arr[i];
        h = arr[i+1];
        i=i+2;

        if (w >= l && h >= l && w != l){
            cout << "CROP IT" << endl;
        }
        else if(w>=l && h >= l && w == l){
            cout<<"ACCEPTED" << endl;
        }
        else{
            cout << "UPLOAD ANOTHER" << endl;
        }
    }

    return 0;
}


