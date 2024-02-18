/*function joinName() {
    let firstName = 'Gideon';
    let lastName = 'Suave';
    let fullName = firstName + ' ' + lastName;
    return fullName;
}
let fullName = joinName();
console.log(fullName);*/

function joinName(firstName, lastName) {
    let name = firstName + ' ' + lastName;
    return name;
}
console.log(joinName('Gideon' + ' ' + 'suave'));