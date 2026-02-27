let N = parseInt(prompt("Jumlah batu:"));

const bataPerJam = 5 * 12;
let jamKerja = 0;
let totalJam = 0;

while (N > 0) {
  jamKerja++;
  totalJam++;
  N -= bataPerJam;

  if (jamKerja === 4 && N > 0) {
    totalJam++;
    jamKerja = 0;
  }
}

let jam = totalJam;
let menit = Math.floor((totalJam - jam) * 60);

console.log(jam + " jam " + menit + " menit");