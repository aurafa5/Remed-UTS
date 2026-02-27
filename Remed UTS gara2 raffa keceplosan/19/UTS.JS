let hutang = 10000000;
const cicilan = 500000;
const bungaRate = 0.02;
let bulan = 0;

while (hutang > 0) {
    let bunga = hutang * bungaRate;
    hutang = hutang + bunga - cicilan;
    bulan++;

    console.log(`Bulan ${bulan}: Sisa hutang = ${hutang.toFixed(2)}`);
}

console.log(`\nTotal waktu pelunasan: ${bulan} bulan`);