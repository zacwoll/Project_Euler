let fibA = 1, fibB = 1, fibC = 0, fibSum = 0;

while (fibSum < 4000000) {
    // Even valued terms?
    if (fibC % 2 == 0)
    {
        fibSum += fibC;
    }
    fibC = fibA + fibB;
    fibA = fibB;
    fibB = fibC;
}

console.log(fibSum);