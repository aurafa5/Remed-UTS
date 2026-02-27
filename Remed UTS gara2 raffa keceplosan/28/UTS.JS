let belanja = parseInt(prompt("Total belanja:"));
let hari = prompt("Hari apa sekarang?").toLowerCase();

let cashback = 0;

if (belanja >= 50000 && belanja <= 100000) {
    cashback = belanja * 0.05;
} else if (belanja > 100000) {
    cashback = belanja * 0.10;
    if (cashback > 25000) cashback = 25000;
}

if (hari === "minggu") cashback += 5000;

console.log("Saldo akhir (setelah cashback): Rp " + cashback);