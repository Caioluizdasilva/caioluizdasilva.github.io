// Passo o ID do produto atraves do metodo get para a pagina "detalhes.js"
var passaValor= function(ite,){
    window.location = "detalhes.html?produto="+item;
}

var links = document.getElementsByTagName('a');
    for(var i = 0; i < links.length; i++){
        links[i].addEventListener("click",function(){
            let key = this.getAttribute('key');
            console.log("O valor é: " + key);

            var valorQueEuQueroPassar = key;
            passaValor(valorQueEuQueroPassar);
            return false;
        })
    }

window.onload = async () => {
    await fetch('https://rafaelescalfoni.github.io/desenv_web/restaurante/items.json')
        .then(async response => await response.json())
        .then(async responseJSON => {
            responseJSON.forEach((item) => {
                createItem(item)
            })
        })
}
// Hora de pegar as coisas do site do Escalfoni 
const createItem = (item) => {
    const items = document.querySelector(".items") // Criado a variavel item
    const name = typeof item.name !== 'undefined' ? item.name : item.title
    const prices = item.price.split('$')
    console.log(prices)   // Substitundo os items
    const div = `<div class="col-3 mb-5"> 
                    <div class="card h-100" style="width: 18rem;">
                        <img src="${'https://raw.githubusercontent.com/rafaelescalfoni/rafaelescalfoni.github.io/main/desenv_web/restaurante/' + item.photo}" class="card-img-top" alt="${name}">
                        <div class="card-body d-flex align-items-start flex-column">
                            <h5 class="card-title">${name}</h5>
                            <p class="card-text">${item.details}</p>
                                <a href="#" class="btn btn-danger mt-auto">${item.price}</a>   
                        </div>
                    </div>
                </div>`
    items.innerHTML += div
}

