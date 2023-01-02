#include <bits/stdc++.h>
#include<string>
using namespace std;

string getHint(string secret, string guess)
{
    int secfre[10]={0};
    int guessfre[10]={0};

    int bulls=0,cows=0;
    for(int i = 0 ; i<secret.size();i++){
        if(secret[i]==guess[i])bulls++;
        else{
            secfre[secret[i]-'0']++;
            guessfre[guess[i]-'0']++;
        }
    }
    for(int i = 0 ;i<guess.size();i++){
        cows+=max(secfre[i],guessfre[i]);
    
    }

    return (to_string(bulls)+"A"+ to_string(cows) +"B");
    }


int main()
{
    string a = "7018";
    string b = "8071";
    string c = getHint(a, b);
    cout << c;

    return 0;
}