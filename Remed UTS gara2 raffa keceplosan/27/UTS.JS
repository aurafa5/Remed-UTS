let patah = parseFloat(prompt("Persentase butir patah:"));
let apek = parseInt(prompt("Beras berbau apek? (1=ya, 0=tidak):"));

if (apek === 1) {
    console.log("Tidak Layak Konsumsi");
} else {
    if (patah < 5) console.log("Premium");
    else if (patah <= 15) console.log("Medium A");
    else if (patah <= 25) console.log("Medium B");
    else console.log("Beras Raskin");
}