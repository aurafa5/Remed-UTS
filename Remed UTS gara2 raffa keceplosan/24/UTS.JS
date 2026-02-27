let paket = prompt("Pilih paket (silver/gold/platinum):").toLowerCase();
let bulan = parseInt(prompt("Jumlah bulan: "));

let harga = 0;
if (paket === "silver") harga = 200000;
else if (paket === "gold") harga = 350000;
else if (paket === "platinum") harga = 500000;

let bayarBulan = bulan === 12 ? 10 : bulan;
let total = harga * bayarBulan;

console.log("Total Biaya: Rp " + total);