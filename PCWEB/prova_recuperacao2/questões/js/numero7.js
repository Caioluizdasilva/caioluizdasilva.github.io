var array = [];
var varia = 1;

function Fibonacci(){
    let num = document.getElementById("num").value
    let per = document.getElementById("resposta");

    if(num >=1){
            array.push(1);
            array.push(1);
            num = num-3
         for(let i = 0;i<=num;i++){
             let more = array[i]+array[varia]
             array.push(more)
             varia++
        }
     }

     console.log(array) 
     per.innerHTML = array
}