#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    cin.ignore();

    while(T--){
        string line, S, X;
        getline(cin, line);
        stringstream ss(line);
        ss >> S >> X;

        size_t pos = 0;
        while((pos = S.find(X, pos)) != string::npos){
            S.replace(pos, X.length(), "#");
            pos += 1;
        }
        cout << S << endl;
    }
    return 0;
}