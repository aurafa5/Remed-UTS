let X = parseFloat(prompt("Ukuran (MB):"));
let K = parseFloat(prompt("Kecepatan (Mbps):"));

let totalMegabit = X * 8;
let detik = totalMegabit / K;

let menit = Math.floor(detik / 60);
let detikSisa = Math.floor(detik % 60);

console.log(menit + " " + detikSisa);