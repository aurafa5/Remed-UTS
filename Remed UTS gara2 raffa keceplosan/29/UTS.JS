function hitung_pajak(jenis, tahun_beli) {
    let tahun = new Date().getFullYear();
    let usia = tahun - tahun_beli;

    let pajak = jenis.toLowerCase() === "motor" ? 200000 : 1000000;

    if (usia > 10) pajak *= 0.8;

    return Math.floor(pajak);
}