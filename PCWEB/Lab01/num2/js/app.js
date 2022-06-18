const input = document.querySelector("#numb")
const update = document.querySelector("#confirma")
const main = document.querySelector("#atv2")

const calcFactorial = () => {
    let result = 1
    for (let aux = 30; aux >= 0; aux--) {

        result = parseFloat(input.value) ** aux
        const createP = document.createElement("p")
        const resultPrint = document.createTextNode(result)
        createP.appendChild(resultPrint)
        main.appendChild(createP)
    }

}

update.addEventListener("click", calcFactorial)