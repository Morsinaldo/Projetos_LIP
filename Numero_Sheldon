#include <iostream>
#include <math.h>

using namespace std;

//Inicialização das funções
bool ehprimo(int n);
int posicaoPrimo(int n);
int inverteNumero(int n);
int produtoDigito(int num1);
bool testaPosicao(int n1, int n2);
void binario(int n1, int vetor[], int t);
bool palindromo(int v1[], int v2[], int t);
int tamanhoVetor(int n1);

int main(){

    int num, posicao = 0;
    int ninvertido = 0, posicaoni = 0;
    int produton = 1, produtoni = 1;
    bool primo = false, primoi = false, tposicao = false, pal = false, produ = true;


    cin >> num; //Entrada
    int t = tamanhoVetor(num);
    int nbi[t],nbiInvertido[t];

    //Chamada das funções
    primo = ehprimo(num);
    posicao = posicaoPrimo(num);
    ninvertido = inverteNumero(num);
    primoi = ehprimo(ninvertido);
    posicaoni = posicaoPrimo(ninvertido);
    produton = produtoDigito(num);
    produtoni = produtoDigito(ninvertido);
    tposicao = testaPosicao(posicao,posicaoni);
    binario(num,nbi,t);
    pal = palindromo(nbi,nbiInvertido,t);

    //Impressão na tela
    if(primo){
        cout << "É primo" << endl;
    } else {
        cout << "Não é primo" << endl;
    }

    cout << "Posição: " << posicao << endl;
    cout << "Número invertido: " << ninvertido << endl;

    if(primoi){
        cout << "Número invertido é primo" << endl;
    } else {
        cout << "Número invertido não é primo" << endl;
    }

    cout << "Posição número invertido: " << posicaoni << endl;

    if(tposicao == true){
        cout << "Posições coincidem" << endl;
    } else {
        cout << "As posições não coincidem" << endl;
    }

    cout << "Produto dos dígitos: " << produton << endl;

    if(produton == posicao){
        cout << "Produto e posição coincidem" << endl;
    } else {
        cout << "Produto e posição não coincidem" << endl;
    }

    cout << "Número em binário: ";
    for(int i = t-1; i >=0; i--){
        cout << nbi[i];
    }

    cout << endl;

    if(pal){
        cout << "Binário é palíndromo" << endl;
    } else {
        cout << "Binário não é palíndromo" << endl;
    }

    if(num == 73){
        cout << "É Sheldon" << endl;
    } else {
        cout << "Não é Sheldon" << endl;
    }
    
    return 0;
}

//Funções

//Primo ou não primo
bool ehprimo(int n){
    int cont = 0;
    bool npri = false;
    for(int i = 1; i <= n; i++){
        if(n%i == 0){
            cont++;
        }
    }

    if(cont == 2){
        npri = true;
    }

    return npri;
}

//Posição numero primo
int posicaoPrimo(int n){
    int posicao = 0;
    for(int i = 2; i <= n; i++){
        bool pri = false;
        pri = ehprimo(i);
        if(pri == true){
            posicao++;
        }
    }
    return posicao;
}

//Inverter o numero
int inverteNumero(int n){
    int d = 0, aux = n, ni = 0,r;
    while(aux > 0){
        aux /= 10;
        d++;
    }

    for(int i = d - 1; i >= 0; i--){
        r = n%10;
        ni += r*pow(10,i);
        n /= 10;
    }

    return ni;
}

//Produto dos digitos
int produtoDigito(int num1){
    int d1 = 0,multi1 = 1;

    for(int i = 2; i > 0; i--){
        d1 = num1%10;
        multi1 *= d1;
        num1 /= 10;
    }

    return multi1;
}

//Verifica a posicao
bool testaPosicao(int n1, int n2){
    bool coincide = false;
    int aux = 0;

    aux = inverteNumero(n1);
    if(aux == n2){
        coincide = true;
    }

    return coincide;
}

//Define o tamanho do vetor
int tamanhoVetor(int n1){
    int j = 1;
    while(pow(2,j) < n1){
        j++;
    }

    return j;
}

//Transforma em binario
void binario(int n1, int vetor[], int t){

    for(int i = t-1; i >=0; i--){

        if(n1 >= pow(2,i)){
            n1 -= pow(2,i);
            vetor[i] = 1;
        } else {
            vetor[i] = 0;
        }
    }
}

//Verifica se é palindromo
bool palindromo(int v1[], int v2[], int t){
    int k = 0, cont = 0;
    bool palin = false;
    for(int i = t-1; i >= 0; i--){
        v2[k] = v1[i];
        k++;
    }

    for(int i = 0; i < t; i++){
        if(v1[i] == v2[i]){
            cont++;
        }
    }

    if(cont == t){
        palin = true;
    }

    return palin;
}
