let pinBenar = "123456";
let kesempatan = 3;

while (kesempatan > 0) {
  let pin = prompt("PIN:");
  if (pin === pinBenar) {
    console.log("Selamat Datang");
    break;
  }
  kesempatan--;
}

if (kesempatan === 0) {
  console.log("Kartu Terblokir!");
}