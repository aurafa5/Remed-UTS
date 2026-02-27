let pajak = parseFloat(prompt("Masukkan nilai pajak (Rp): "));
let telat = parseInt(prompt("Masukkan jumlah bulan telat: "));
let denda = 0;

if (telat >= 1 && telat <= 3) {
    denda = 0.05 * pajak;
} else if (telat >= 4 && telat <= 6) {
    denda = 0.10 * pajak;
} else if (telat > 6) {
    denda = 0.25 * pajak + 50000;
}

let total = pajak + denda;
console.log("Denda: Rp " + denda);
console.log("Total: Rp " + total);