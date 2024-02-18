function squareItUp(startingNumber){
if ((typeof startingNumber != 'number') || (typeof startingNumber <= 1)) {
    return -1;
}
square = startingNumber * startingNumber;

if (square > 100000) {
    console.log(/*`The answer is :` */square);
}
else {
    squareItUp(square);
}

}
