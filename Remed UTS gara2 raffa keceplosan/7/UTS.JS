let kursi = [];
for (let i = 0; i < 5; i++) {
  kursi[i] = [0, 0, 0, 0, 0];
}

let baris = parseInt(prompt("Baris:"));
let kolom = parseInt(prompt("Kolom:"));

if (kursi[baris][kolom] === 1) {
  console.log("Kursi Penuh!");
} else {
  kursi[baris][kolom] = 1;
  for (let i = 0; i < 5; i++) {
    console.log(kursi[i]);
  }
}