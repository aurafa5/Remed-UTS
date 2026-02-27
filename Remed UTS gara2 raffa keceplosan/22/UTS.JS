let magnitudo = parseFloat(prompt("Magnitudo: "));
let kedalaman = parseFloat(prompt("Kedalaman (km): "));
let status = "";

if (magnitudo < 5.0) status = "Ringan";
else if (magnitudo <= 6.5) status = "Sedang";
else if (magnitudo <= 7.5) status = "Kuat";
else status = "Sangat Berbahaya";

if (kedalaman < 10) status += " - Potensi Tsunami";

console.log(status);