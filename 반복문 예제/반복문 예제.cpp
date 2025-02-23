#include <iostream>

using namespace std;

int main(){

    for(int i=0; i<5; i++) {
        cout << i << endl;
        i += 1;
    }

    string str = "Panda";
    int i = 0;
    while (str[i]!= '\0'){
        cout << str[i] << endl;
        i++;
    }

    int j =0;
    do {
        cout << "안녕하세요\n";
        j++; 
    } while (j<3);

    return 0;
}