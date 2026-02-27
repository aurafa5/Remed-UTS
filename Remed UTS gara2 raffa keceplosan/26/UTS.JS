let jarak = parseInt(prompt("Jarak (km):"));
let bagasi = parseInt(prompt("Bagasi (kg):"));
let umur = parseInt(prompt("Umur:"));

let tarif = 0;
if (jarak <= 50) tarif = 50000;
else if (jarak <= 150) tarif = 125000;
else tarif = 250000;

let tambahan = 0;
if (bagasi > 20) tambahan = (bagasi - 20) * 10000;

if (umur > 60) tarif *= 0.8;

let total = tarif + tambahan;
console.log("Total Tiket: Rp " + total);