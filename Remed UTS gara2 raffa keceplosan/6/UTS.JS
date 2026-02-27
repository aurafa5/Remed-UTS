let kehadiran = [];
for (let i = 0; i < 10; i++) {
  kehadiran.push(parseInt(prompt("Status:")));
}

let masuk = kehadiran.filter(x => x === 1).length;
let persen = (masuk / 10) * 100;

console.log(masuk);
console.log(persen);