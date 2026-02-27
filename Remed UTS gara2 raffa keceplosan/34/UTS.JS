let gol = parseInt(prompt("Golongan kendaraan (1/2/3):"));
let weekend = parseInt(prompt("Akhir pekan? (1=ya,0=tidak):"));
let etoll = parseInt(prompt("Menggunakan e-toll bank tertentu? (1=ya,0=tidak):"));

let tarif = 0;
if (gol === 1) tarif = 12000;
else if (gol === 2) tarif = 18000;
else tarif = 30000;

if (weekend === 1) tarif *= 1.2;
if (etoll === 1) tarif -= 2000;

console.log("Total tarif: Rp " + Math.floor(tarif));