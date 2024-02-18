/* var time = 8;
if (time < 12){
    console.log(`Good morning`);
}
else if (time < 17){
    console.log(`good afternoon`);
}
else if (time < 20){
    console.log(`good evening`);
}
else{
    console.log(`good night`);
}*/

/* var languagePreference = "Igbo";
switch (languagePreference) {
    case "English":
        console.log(`Hello`);
        break;
    case "Spanish":
        console.log(`Holla`);
        break;
    case "German":
        console.log(`Guten Tag`);
        break;
    case "French":
        console.log(`Bonjour`);
        break;
    default:
        console.log(`sorry i don't know how to speak ${languagePreference}`);
} */
 /*let fname = 'Gideon';
while (fname != 'Gideon') {
    console.log(fname);
}
}*/

var i;
for ( i = 0; i <= 10; i++) {
    if (i%2 != 0){
        continue;
    }
    console.log(i + ' is an even number');
}