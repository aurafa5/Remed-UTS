let volume = 0;
let jam = 0;

while (true) {
  jam++;
  volume += 500;

  if (jam % 4 === 0) {
    volume -= 1200;
    if (volume < 0) volume = 0;
  }

  if (volume >= 10000) {
    console.log("Siaga 1");
    break;
  }
}