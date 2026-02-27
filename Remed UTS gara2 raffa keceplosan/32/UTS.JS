let baterai = 100;
let km = 0;

while (baterai >= 15) {
    km++;
    let angin = parseInt(prompt(`Km ${km}: Angin kencang? (1=ya,0=tidak):`));
    baterai -= (angin === 1) ? 5 : 3;
    if (baterai < 15) {
        console.log(`Km ${km}: Landing Darurat! Baterai ${baterai}%`);
        break;
    }
    console.log(`Km ${km}: Baterai ${baterai}%`);
}