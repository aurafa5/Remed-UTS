let km = parseFloat(prompt("Km:"));
let rating = parseInt(prompt("Rating 5? (1/0):"));

let pendapatan = km * 2500;

if (km > 50) {
  pendapatan += 20000;
}

if (rating === 1) {
  pendapatan += pendapatan * 0.05;
}

console.log(parseInt(pendapatan));