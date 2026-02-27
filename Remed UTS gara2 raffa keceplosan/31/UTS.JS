let ketebalan = 10;
let km = 0;

while (ketebalan > 2) {
    km += 100;
    let rusak = parseInt(prompt(`100km ke-${km}: Jalanan rusak? (1=ya,0=tidak):`));
    if (rusak === 1) ketebalan -= 1.2;
    else ketebalan -= 0.5;
    if (ketebalan < 2) ketebalan = 2;
    console.log(`Setelah ${km} km, sisa ketebalan: ${ketebalan.toFixed(1)} mm`);
}