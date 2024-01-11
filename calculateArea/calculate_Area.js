let length;
let width;

function calculateArea(){
    length = parsefloat(document.getElementById('length').value);
    width = parsefloat(document.getElementById(width).value);

    let area = length * width;
}

document.getElementById('result').innerText = `The area of the rectangle is: ${area}`;