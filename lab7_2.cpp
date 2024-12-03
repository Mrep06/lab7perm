#include <iostream>
#include <cmath>
#include <string>
using namespace std;
string name;
string movie,t,text;
int ID;
int GEARolds(int x){
    x = x / pow(10,7);
    return x;
}

int main() {
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout << "?????: " ;
    getline(cin,name);
    cout << "Fahsai: Wow!!! "<< name << " is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << name << ": ";
    cin >> ID ;
    cin.ignore();
    cout << "Fahsai: I think you may be GEAR " << GEARolds(ID) - 12  <<". I have a free movie ticket for you.\n";
    cout << "Fahsai: Let's go to the cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n";
    cout << name << ": ";
    getline(cin,movie);
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << name << ": ";
    getline(cin,t);
    cout << "Fahsai: "<< t <<"....that is OK!!! I'm looking forward to watching "<< movie <<" with you.\n";
    cout << name << ": ";
    getline(cin,text);
    cout << "Fahsai: 555+ see you "<< t <<". Bye Bye \\(^ ^)/\n";
    return 0;
}
