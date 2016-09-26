#include <iostream>

using namespace std;

int main()
{
    int arr[3], i = 0;

    do{
        cin >> arr[0] >> arr[1] >> arr[2];
        if ((arr[0] == 0 and arr[1] == 0 and arr[2] == 0) == false){
            //(arr[0] != 0 and arr[1] != 0 and arr[2] != 0) or (arr[0] != 0 and arr[1] != 0 and arr[2] == 0) or (arr[0] != 0 and arr[1] == 0 and arr[2] != 0) or (arr[0] != 0 and arr[1] == 0 and arr[2] == 0) or (arr[0] == 0 and arr[1] != 0 and arr[2] != 0) or (arr[0] == 0 and arr[1] != 0 and arr[2] == 0) or (arr[0] == 0 and arr[1] == 0 and arr[2] != 0)
            if (arr[1] - arr[0] == arr[2] - arr[1]){
                cout << "AP " << arr[2] + (arr[1] - arr[0]) << endl;
            }
            else{
                cout << "GP " << arr[2] * (arr[1]/arr[0]) << endl;
            }
        }
        else{
            break;
        }
    }while((arr[0] == 0 and arr[1] == 0 and arr[2] == 0) == false);


    return 0;
}
