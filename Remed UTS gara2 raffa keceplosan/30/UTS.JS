let T = parseInt(prompt("Suhu awal:"));
let menit = 0;

while (true) {
    menit++;
    T += 5;
    if (menit % 4 === 0) T -= 12;
    if (T > 100) {
        console.log("Menit " + menit + ": Mesin meledak!");
        break;
    }
    console.log("Menit " + menit + ": Suhu " + T + "°C");
}