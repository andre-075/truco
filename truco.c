#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <pilha.h>
struct cartaz{
    int numero;
    char nipe;
}cartaz;
void embaralhar(int embaralhando[],int tamanho){
    for(int i = tamanho-1;i>0;i--){
        int j= rand()% (i+1);
        
        int temp = embaralhando[i];
        embaralhando[i]= embaralhando[j];
        embaralhando[j]=temp;

    }
}
void baralhopronto(int embaralhando[], struct cartaz baralho[], struct cartaz embaralhado[], int tamanho ){
        for(int i=0;i<40;i++){
            int x= embaralhando[i];
            for(int j=0;j<40;j++){
                if(x==j){
                    embaralhado[i]=baralho[j];
                }
            
        }
    }
    }
int main(){
    tp_pilha ordem;
    inicializapilha(&ordem);
    int embaralhando[40];
    struct cartaz embaralhado[40];
    struct cartaz baralho [40] = {
    {4,'O'}, {5,'O'}, {6,'O'}, {7,'O'}, {11,'O'}, {12,'O'}, {13,'O'}, {14,'O'}, {2,'O'}, {3,'O'},
    {4,'E'}, {5,'E'}, {6,'E'}, {7,'E'}, {11,'E'}, {12,'E'}, {13,'E'}, {14,'E'}, {2,'E'}, {3,'E'},
    {4,'C'}, {5,'C'}, {6,'C'}, {7,'C'}, {11,'C'}, {12,'C'}, {13,'C'}, {14,'C'}, {2,'C'}, {3,'C'},
    {4,'P'}, {5,'P'}, {6,'P'}, {7,'P'}, {11,'P'}, {12,'P'}, {13,'P'}, {14,'P'}, {2,'P'}, {3,'P'}
};
    srand(time(NULL));
    for(int i=0;i<40;i++){
        embaralhando[i]=i;
    }
    embaralhar(embaralhando,40);
    baralhopronto(embaralhando,baralho, embaralhado, 40  );
    
    for(int i = 0; i < 40; i++) {
    printf("%d%c ", embaralhado[i].numero, embaralhado[i].nipe);
}


}