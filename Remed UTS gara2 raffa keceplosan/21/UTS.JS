let N = parseInt(prompt("Jumlah paket: "));
let bonusPerPaket = N > 50 ? 3000 : 2000;
let bonus = N * bonusPerPaket;

let tambahan = Math.floor(N / 10) * 5000;

let total = bonus + tambahan;
console.log("Pendapatan: Rp " + total);