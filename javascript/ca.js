function MBBS(examScore, testScore) {
    examScore = 75;
    testScore = 100;
    let result = (examScore + testScore) / 2;
    return result;
}
let result = MBBS();
switch (true) {
    case result > 100 || result < 0:
    console.log("Error in MBBS figure, check exam scores and test score, try again");
    break;
    case result >= 70:
    console.log("Congrats you passed. Your result is " + result);
    break;
    case result < 70:
    console.log("Sorry you failed, try again next year. Your result is " + result);
    break;
    default:
    console.log("Kindly put in your MBBS exam and test figures");
}
