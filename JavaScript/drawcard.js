
function drawCard(arr) {
    const getanumber = Math.floor(Math.random() * arr.length); //Valor aleatório.
    
    const item = arr[getanumber];
    
    arr.splice(getanumber, 1);
    
    console.log(`Cards restantes: ${arr}`);
    return item;
}
var baralho = ["C1", "C2", "C3", "C4", "C5", "C6", "C7", "C8", "C9", "C10", "CJ", "CQ", "CK", "JOKER1", "E1", "E2", "E3", "E4", "E5", "E6", "E7", "E8", "E9", "E10", "EJ", "EQ", "EK", "JOKER2", "O1", "O2", "O3", "O4", "O5", "O6", "O7", "O8", "O9", "O10", "OJ", "OQ", "OK", "JOKER3", "P1", "P2", "P3", "P4", "P5", "P6", "P7", "P8", "P9", "P10", "PJ", "PQ", "PK", "JOKER4"];

var temcarta = baralho.length; //Tamanho do baralho.

var continuar = 2;

while(temcarta > 0){
    temcarta--
    continuar = parseInt(prompt("Comprar? (1 - sim, 0 - não): "))
    if (continuar == 1){
        console.log(drawCard(baralho));
    } else {
        console.log(`Cards restantes no final: ${baralho}`)
        temcarta = 0;
    }
    
}

