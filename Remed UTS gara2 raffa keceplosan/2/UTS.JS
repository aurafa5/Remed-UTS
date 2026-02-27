let D = parseFloat(prompt("Jarak:"));
let M = parseFloat(prompt("Muatan:"));

let bebanAwal = 150;
let muatanAkhir = M * 0.9;
let konsumsiPerKm = muatanAkhir * 5;
let totalLiter = konsumsiPerKm * D;
let totalBiaya = totalLiter * 18500;

console.log(parseInt(totalBiaya));