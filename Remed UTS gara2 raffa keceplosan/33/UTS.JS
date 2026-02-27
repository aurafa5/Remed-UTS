let berat = parseFloat(prompt("Berat apel (g):"));
let cacat = parseInt(prompt("Apel cacat? (1=ya,0=tidak):"));

let grade = "";
if (berat > 200) grade = "A";
else if (berat >= 150) grade = "B";
else grade = "C";

if (cacat === 1) {
    if (grade === "A") grade = "B";
    else if (grade === "B") grade = "C";
    else grade = "Reject";
}

console.log("Grade apel:", grade);