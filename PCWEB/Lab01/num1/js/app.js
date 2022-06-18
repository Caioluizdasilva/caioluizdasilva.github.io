const input = document.querySelector("#calc")
const update = document.querySelector("#button")
const main = document.querySelector("#main")

const calcFactorial = () => {
    let result = 1
    for(let aux = 1; aux <= parseFloat(input.value); aux++) {
    result *= aux
    }

    const createP = document.createElement("p")
    const resultPrint = document.createTextNode(result)
    createP.appendChild(resultPrint)
     main.appendChild(createP)
}

update.addEventListener("click", calcFactorial)