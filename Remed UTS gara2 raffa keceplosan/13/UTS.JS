let penjualan = [];

for (let i = 0; i < 2; i++) {
  penjualan[i] = [];
  for (let j = 0; j < 3; j++) {
    penjualan[i][j] = parseInt(prompt("Penjualan:"));
  }
}

for (let i = 0; i < 2; i++) {
  let total = 0;
  for (let j = 0; j < 3; j++) {
    total += penjualan[i][j];
  }
  console.log(total);
}