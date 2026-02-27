let bensin = 60;
for (let lap = 1; lap <= 50; lap++) {
    bensin -= 3;
    if (bensin <= 0) {
        console.log("Lap " + lap + ": Bensin habis!");
        break;
    }
    if (lap % 5 === 0) bensin += 10;
    console.log("Lap " + lap + ": Sisa bensin " + bensin + "L");
}