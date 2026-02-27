let K = parseInt(prompt("Jumlah siklus:"));

for (let s = 0; s < K; s++) {
  for (let t = 30; t > 0; t--) console.log("Hijau " + t);
  for (let t = 5; t > 0; t--) console.log("Kuning " + t);
  for (let t = 20; t > 0; t--) console.log("Merah " + t);
}