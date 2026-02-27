let suhu = [];
for (let i = 0; i < 10; i++) {
  suhu.push(parseFloat(prompt("Suhu:")));
}

let total = 0;
for (let i = 0; i < 10; i++) total += suhu[i];

let rata = total / 10;
let maks = Math.max(...suhu);
let jamMaks = suhu.indexOf(maks) + 1;

console.log(rata);
console.log(jamMaks);