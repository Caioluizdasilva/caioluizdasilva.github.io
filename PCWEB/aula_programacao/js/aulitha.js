//Numeber 1 

naoTemoSenso (geraPessoa(16, 'feminino'), geraPessoa(18, 'masculino'), geraPessoa(17, 'masculino'), geraPessoa(19,'masculino', geraPessoa(17, 'feminino'), geraPessoa(20, 'feminino')))

function geraPessoa(idade, genero) {
    return {idade: idade, genero: genero}
}

function naoTemoSenso(...dados) {
    let qtdMaiores = 0;
    let qtdMulheres = 0;
    let qtdHomens = 0;  
    dados.forEach(info => {
        if(info.idade >= 18) {
            qtdMaiores = qtdMaiores + 1
        }
        if(info.genero = 'feminino'){
            qtdMulheres = qtdMulheres + 1
        }
        if(info.genero = 'masculino'){
            qtdHomens = qtdHomens + 1
        }
        
    })

    console.log(`A quantidade de pessoas que são maiores de idade são: ${qtdMaiores}, e a quantidade de mulheres são:${qtdMulheres} e a quantidade de homens é: ${qtdHomens}`)
}
