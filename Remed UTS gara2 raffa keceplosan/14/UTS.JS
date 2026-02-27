let rapat = parseInt(prompt("Rapat:"));
let kerja = parseInt(prompt("Kerja:"));
let lobby = parseInt(prompt("Lobby:"));

let watt = rapat*2000 + kerja*5000 + lobby*8000;
let kwhPerHari = (watt * 12) / 1000;
let biaya = kwhPerHari * 1500 * 30;

console.log(parseInt(biaya));