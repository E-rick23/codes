
function drawCard(arr) {
    const getanumber = Math.floor(Math.random() * arr.length); //Random value within the amount of cards in the deck
    
    const item = arr[getanumber];
    
    arr.splice(getanumber, 1);
    
    console.log(`Remaining cards: ${arr}`);
    return item;
}
var deck = ["C1", "C2", "C3", "C4", "C5", "C6", "C7", "C8", "C9", "C10", "CJ", "CQ", "CK", "JOKER1", "E1", "E2", "E3", "E4", "E5", "E6", "E7", "E8", "E9", "E10", "EJ", "EQ", "EK", "JOKER2", "O1", "O2", "O3", "O4", "O5", "O6", "O7", "O8", "O9", "O10", "OJ", "OQ", "OK", "JOKER3", "P1", "P2", "P3", "P4", "P5", "P6", "P7", "P8", "P9", "P10", "PJ", "PQ", "PK", "JOKER4"];

var hasCard = deck.length; //Deck size.

var keepgoing = 2;

while(hasCard > 0){
    hasCard--
    keepgoing = parseInt(prompt("Draw? (1 - Yes, 0 - No): "))
    if (keepgoing == 1){
        console.log(drawCard(deck));
    } else {
        console.log(`Remaining cards in the end: ${deck}`)
        hasCard = 0;
    }
    
}

