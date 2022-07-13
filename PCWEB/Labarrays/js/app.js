const input = document.querySelector("#calc")
const update = document.querySelector("#button")
const main = document.querySelector("#main")

var arr = [1,2,3,4,5,6,7,8,9,10];

var soma = arr.reduce(function(soma, i) {
    return soma + i;
});

console.log(soma);
update.addEventListener("click", arr)