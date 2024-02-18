function flexiibleWelcom(){
    var welcome = "Welcome,";
    for(var i = 0; i < arguments.length; i++){
        welcome = welcome + arguments[i] + " ";
    }
    return welcome;
}
console.log(flexiibleWelcom("Gideon", "Suave", "Muhyul", "Thor") + " ");
console.log(flexiibleWelcom("Queens", "King", "Muhyul") + " ");