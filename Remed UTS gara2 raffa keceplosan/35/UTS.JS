let air = 5000;
let jam = 0;

while (air > 500) {
    jam++;
    air -= air * 0.002;
    if (jam % 2 === 0) air -= 15;
    if (air <= 500) {
        console.log(`Jam ${jam}: Refill Tanki! Sisa air ${air.toFixed(1)} L`);
        break;
    }
    console.log(`Jam ${jam}: Sisa air ${air.toFixed(1)} L`);
}