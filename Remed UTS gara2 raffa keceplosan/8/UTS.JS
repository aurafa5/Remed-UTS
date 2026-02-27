let B = parseFloat(prompt("Jumlah ban:"));

let karetAlami = 3 * B;
let karetSintetis = 1.5 * B;

let biaya = karetAlami * 22000 + karetSintetis * 18000;

let alamiKuintal = karetAlami / 100;
let sintetisKuintal = karetSintetis / 100;

console.log(parseInt(biaya));
console.log(alamiKuintal);
console.log(sintetisKuintal);