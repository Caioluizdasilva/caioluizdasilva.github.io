
//pegar os dados do arquivo json atraves do ajax
var ajax = new XMLHttpRequest();

ajax.open("GET", "https://rafaelescalfoni.github.io/desenv_web/restaurante/items.json", true);
ajax.responseType = "json";
ajax.send(); 
ajax.addEventListener("readystatechange", function(){
    if(ajax.readyState === 4 && ajax.status === 200){
        console.log(ajax);

        var resposta = ajax.response;

//depois de pegar os dados agora é hora de mapealos montando o card dos produtos
        var containerCardsPedidos = document.getElementById('card-pedidos');

        resposta.map((valor)=>{
            containerCardsPedidos.innerHTML += `
           <section class="cards-area">
        <div id="card-pedidos" ></div>
        <div class="card">
            <div class="${valor.photo}"><img src="${valor.photo}" alt=""></div>
            <div class="content">
                <div class="name">${valor.name}</div>
                <div class="code">${valor.code}</div>
                <div style="clear:both"></div>

                <div class="details">${valor.details}<br><br></div>
                <div class="btn">
                    <a key="price" href="#">${valor.price}</a>
                </div>
            </div>
        </div>
    </section>`;
        })

// Passo o ID do produto atraves do metodo get para a pagina "detalhes.js"
        var passaValor= function(valor){
            window.location = "detalhes.html?produto="+valor;
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



    }
});

