function calculateAge() {
    const dob = 1996
    const currenYear = new Date().getFullYear()
    const age = currenYear - dob
    return age;
}
const age = calculateAge()
console.log( `my age is ${age}`)
