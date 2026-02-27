let total = 1000000000;

let material = total * 0.40;
let alat = total * 0.25;
let upah = total * 0.20;

let upahMandor = upah * 0.15 * 5;
let sisa = upah - upahMandor;

let gajiKuli = sisa / 50;

console.log(parseInt(gajiKuli));