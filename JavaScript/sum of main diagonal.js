//This code simply makes the sum the main diagonal of a matrix.
var tam, soma;
soma = 0;
tam = parseInt(prompt("Digite o tamanho da matriz:"));
var m = [];
for(i = 0; i < tam; i++){
    m[i] = []
    for(j = 0; j < tam; j++){
        m[i][j] = parseInt(prompt(""));
    }
}

for(i = 0; i < tam; i++){
    for(j = 0; j < tam; j++){
        if (i == j){
            soma = soma + m[i][j];
        }
    }
}
alert(`A soma dos valores é: ${soma}`);
    