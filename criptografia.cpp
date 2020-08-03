#include <iostream>
#include <ctype.h>
#include <string.h>

using namespace std;

const int tam = 500;

void criptografar(char s1[], char s2[], int n);
void descriptografar(char s3[], char s4[], int n);

int main(){

    int n;
    char s1[tam],s2[tam],s3[tam],s4[tam];

    cin >> n;
    cin.get();
    cin.getline(s1, tam);
    cin.getline(s3, tam);

    criptografar(s1,s2,n);
    descriptografar(s3,s4,n);

    cout << s1 << " =>" << endl;
    cout << s2 << endl;
    cout << s3 << " =>" << endl;
    cout << s4;

    return 0;
}

void criptografar(char s1[], char s2[], int n){
    int t = strlen(s1);

    for(int i = 0; i < t; i++){
        s2[i] = s1[i];
    }

    for(int i = 0; i < t; i++){
        if(i%2 == 0){
            if(s1[i] >= 'a' && s1[i] <= 'z'){
                s2[i] += n;
                if(s2[i] > 'z'){
                    s2[i] = s2[i]%122 + 96;
                }
            } else if(s1[i] >= 'A' && s1[i] <= 'Z'){
                s2[i] += 2*n;
                if(s2[i] > 'Z'){
                    s2[i] = s2[i]%90 + 64;
                }
            }
        } else {
            if(s1[i] >= 'a' && s1[i] <= 'z'){
                s2[i] -= n;
                if(s2[i] > 'Z' && s2[i] < 'a'){
                    s2[i] -= 6;
                    s2[i] = tolower(s2[i]);
                }
            } else if(s1[i] >= 'A' && s1[i] <= 'Z'){
                s2[i] -= 3*n;
                if(s2[i] < 'A'){
                    s2[i] = s2[i] + 26;
                }
            }
        }
    }
    s2[t] = '\0';
}

void descriptografar(char s3[], char s4[], int n){
    int t = strlen(s3);

    for(int i = 0; i < t; i++){
        s4[i] = s3[i];
    }

    for(int i = 0; i < t; i++){
        if(i%2 == 0){
            if(s3[i] >= 'a' && s3[i] <= 'z'){
                s4[i] -= n;
                if(s4[i] < 'a'){
                    s4[i] -= 6;
                    s4[i] = tolower(s4[i]);
                }
            } else if(s3[i] >= 'A' && s3[i] <= 'Z'){
                s4[i] -= 2*n;
                if(s4[i] < 'A'){
                    s4[i] = s4[i] + 26;
                }
            }
        } else {
            if(s3[i] >= 'a' && s3[i] <= 'z'){
                s4[i] += n;
                if(s4[i] > 'z'){
                    s4[i] = s4[i]%122 + 96;
                }
            } else if(s3[i] >= 'A' && s3[i] <= 'Z'){
                s4[i] += 3*n;
                if(s4[i] > 'Z'){
                    s4[i] = s4[i]%90 + 64;
                }
            }
        }
    }
    s4[t] = '\0';
}
