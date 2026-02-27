let tinggi = 0;
let hari = 0;

while (true) {
  hari++;
  tinggi += 15;

  if (hari % 7 === 0) {
    tinggi -= 20;
  }

  if (tinggi <= 0) break;
}