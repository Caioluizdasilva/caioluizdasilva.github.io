
const main = document.querySelector("#atv5")

const verifyNumber = (number) => {
    for(let aux = 2; aux < number; aux++) {
        if(number % aux == 0) return false;
        return true;
    }
}

for(let aux = 2; aux < 100; aux++) {
    if (verifyNumber(aux)) {
        const createP = document.createElement("p")
        const resultPrint = document.createTextNode(parseFloat(aux))
        createP.appendChild(resultPrint)
        main.appendChild(createP)
    };
}
