const newDate = nova Data();
data const = documento. consultaSelector (".input1");
const confirmar = documento. consultaSelector (".confirmar1");

const dateNas = () => {
    data constInput  = data. valor;
    console. log (dataInput)
}

const dateH = () => {
    data constHoras  = newDate. getHours();
    console. log (dateHoras);
    data de retornoHoras;
}

const dateM = () => {
     const dateMonth = newDate. getMonth();
    console. log (dateMonth);
    data de retornoMonth;
}

const dateY = () => {
     const dateYear = newDate. getFullYear();
    console. log (dateYear);
    data de retornoAno;
}

conversor const = () => {
    const salvarMonth = dateM();
     const monthInHours = (24 * 30) * saveMonth;
    console. log(monthInHours); 
}

confirmar. addEventListener("clique",dataNas)
confirmar. addEventListener("clique", dataH)
confirmar. addEventListener("clique", dateM)
confirmar. addEventListener ("clique", dateY)
confirmar. addEventListener("clique",conversor )