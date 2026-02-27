let jam = parseFloat(prompt("Jam kerja per minggu:"));
let gajiKotor = 0;

if (jam <= 40) {
    gajiKotor = jam * 50000;
} else if (jam <= 50) {
    gajiKotor = 40 * 50000 + (jam - 40) * (1.5 * 50000);
} else {
    gajiKotor = 40 * 50000 + 10 * (1.5 * 50000) + (jam - 50) * (2 * 50000);
}

let potongan = gajiKotor * 0.02 + gajiKotor * 0.05;
let gajiBersih = gajiKotor - potongan;

console.log("Gaji Kotor: " + gajiKotor);
console.log("Total Potongan: " + potongan);
console.log("Gaji Bersih: " + gajiBersih);