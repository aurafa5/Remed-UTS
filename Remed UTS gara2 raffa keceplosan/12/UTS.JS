let nilai = [];

for (let i = 0; i < 3; i++) {
  nilai[i] = [];
  for (let j = 0; j < 3; j++) {
    nilai[i][j] = parseInt(prompt("Nilai:"));
  }
}

for (let col = 0; col < 3; col++) {
  let total = 0;
  for (let row = 0; row < 3; row++) {
    total += nilai[row][col];
  }
  console.log(total);
}