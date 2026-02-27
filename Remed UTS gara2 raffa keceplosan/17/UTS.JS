let penjualan = [];

for (let i = 0; i < 3; i++) {
  penjualan[i] = [];
  for (let j = 0; j < 4; j++) {
    penjualan[i][j] = parseInt(prompt("Penjualan:"));
  }
}

let maxTotal = -1;
let cabangTertinggi = 0;

for (let i = 0; i < 3; i++) {
  let total = 0;
  for (let j = 0; j < 4; j++) {
    total += penjualan[i][j];
  }
  if (total > maxTotal) {
    maxTotal = total;
    cabangTertinggi = i + 1;
  }
}

console.log(cabangTertinggi);