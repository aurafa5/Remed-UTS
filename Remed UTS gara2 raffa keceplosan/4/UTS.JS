let obat = ["Paracetamol", "Amoxicillin", "Ibuprofen", "Antalgin", "CTM",
            "Vitamin C", "Omeprazole", "Ranitidine", "ORS", "Salbutamol"];

let stok = [10, 5, 0, 7, 3, 12, 0, 4, 9, 1];

let cari = prompt("Cari obat:");

let index = obat.indexOf(cari);

if (index !== -1) {
  if (stok[index] === 0) console.log("Obat Habis");
  else console.log(stok[index]);
} else {
  console.log("Obat Tidak Ditemukan");
}