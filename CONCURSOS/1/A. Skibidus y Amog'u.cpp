#include <iostream>
#include <string>
using namespace std;

string Cplural(const string&palabra){
    if(palabra.length()>=2 && palabra[palabra.length()-2]=='u' && palabra[palabra.length()-1]=='s'){
        string plural=palabra;
        plural[plural.length()-2]='i';
        plural.pop_back();
        return plural;
    }
    return palabra;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string W;
        cin>>W;
        string Fplural=Cplural(W);
        cout<<Fplural<<endl;
    }
}