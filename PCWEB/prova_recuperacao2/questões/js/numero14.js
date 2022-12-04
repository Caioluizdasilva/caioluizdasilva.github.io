const estadosList = {
    AM: "AM",
    GO: "GO",
    MG: "MG",
    PA: "PA",
    RJ: "RJ",
    SP: "SP"
    };

    for(estados in estadosList) {
        option = new Option(estadosList[estados], estados);
        estadosselect.options[estadosSelect.options.length] = option;
        }

estadosSelect.options.length = 0;