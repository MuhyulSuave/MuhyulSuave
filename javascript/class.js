var sandwich = {
    meat: "",
    cheese: "",
    condiments: "",
    makeSandwich: function (meat, cheese, bread, condiments) {
        this.cheese = cheese;
        this.meat = meat;
        this.bread = bread;
        this.condiments = condiments;
        var mySandwich = this.cheese + " " + this.bread + " " + this.condiments + " " + this.meat;
 return mySandwich;       
    }
}

var sandwichOrder = sandwich.makeSandwich("ham", "cheddar", "wheat", "mustard");
console.log(sandwichOrder);