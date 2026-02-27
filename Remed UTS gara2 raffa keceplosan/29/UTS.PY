def hitung_pajak(jenis_kendaraan, tahun_beli):
    from datetime import datetime
    tahun_sekarang = datetime.now().year
    usia = tahun_sekarang - tahun_beli

    if jenis_kendaraan.lower() == "motor":
        pajak = 200000
    else:
        pajak = 1000000

    if usia > 10:
        pajak *= 0.8

    return int(pajak)