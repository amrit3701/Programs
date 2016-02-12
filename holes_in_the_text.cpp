#include<iostream>
#include<string>
using namespace std;

int main()
{
  cout<<"hello world";
  int i,j,no;
  cout<<"enter the number for entering the input \n";
  cin>>i;

  char s[100];
  
  for(j=0;j<i;j++)
  {
    cin >> s;
    j++;  
  }   
  cout <<"string is \n";
  cout << s;

  for (j=0; s[j]!='\0'; j++)
  {
    if(s[j]=='A')
    {
      no = no+1;
    };
  }

  cout << endl <<"no = "<< no;

  return 0;
}
