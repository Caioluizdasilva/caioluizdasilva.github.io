//criar o objeto XMLHttpRequest
let xhttp = new XMLHttpRequest()

let url = "https://rafaelescalfoni.github.io/desenv_web/filmes.json"

let criaLista = lista => {
   /* let items = ""
    lista.forEach(item =>{
        items += `<li>${item}</li>`
    })
    return items
    */
   return lista.reduce(function(elementos, item){
       return elementos + `<li>${item}</li>`
   }, "")
}

let criacatalogo = catalogo =>{
    return `<!DOCTYPE html>
    <html lang="pt-br">
    <head>
        <meta charset="UTF-8">
        <title>CEFETFLIX</title>
        <script src="./js/app.js" defer></script>
    </head >
    <body>
        <section class="catalogo">
            <div class="catalogo">
                <img src="${catalogo.figura}" alt="${catalo.id}">
                <h3>Catálogo</h3>
                <p class="titulo">${catalogo.titulo}</p>
                <div class="resumo">
                    <ul>
                    ${criacatalogo(catalogo.resumo)}
                </div>
                <div class="generos">
                    <ul>
                    ${criacatalogo(catalogo.generos)}
                    </ul>
    
                </div>
                <div class="titulos">
                    <ul>
                    ${criacatalogo(catalogo.tituloSemelhantes)}
                    </ul>
    
                </div>
                <div class="classificacao">
                <ul>
                   ${criacatalogo(catalogo.classificacao)}
                </ul>

            </div>
            <div class="elenco">
                <ul>
                ${criacatalogo(catalogo.elenco)}
                </ul>

            </div>
            <div class="opinioes">
                <ul>
                ${criacatalogo(catalogo.opinioes)}
                </ul>
                <div class="descricao">
                    <ol>
                    ${criacatalogo(catalogo.descricao)}
                    </ol>
    
                </div>
    
    
            </div>
    
        </section>
    </body>
    </html>` }
//evento ao alterar o estado da requisição
xhttp.onreadystatechange = function(){
    //recebeu uma resposta (readyStat == 4)
    //estado de resposta é sucesso (status == 200)
    if(this.readyState == 4 && xhttp.status == 200){
        console.log(this.responseText)
        let receitas = JSON.parse(this.responseText)
        let secao = document.querySelector(".catalogo")
        receitas.forEach(prato => {
            secao.innerHTML += criacatalogo(catalogo)
        })
    }
}

//prepara a requisição
//configurar o objeto AJAX
// Parâmetro 1. verbo GET
// Parâmetro 2. caminho (URL)
// Parâmetro 3. tipo de requisição - assíncrona (true), síncrona (false).
xhttp.open("GET", url, true)

//envia a requisição
xhttp.send()