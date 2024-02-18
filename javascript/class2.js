function person(){
    this.feet = 2;
    this.hands = 2;
    this.nose = 1;
    this.hairColor = "Black";
    this.eyes = 2;
    this.species = "Homo sapiens";
}
var MuhyulSuave = new person();
var johnnyCash = new person();
var sfSuave = new person();
// setting new properties
person.prototype.knees = 2;
person.prototype.toes = 10;
person.prototype.ears = 2;
// checking values of  properties

console.log("Muhyul Suave has " + MuhyulSuave.feet + " feet!");
console.log(sfSuave.toes);