var usuarios = [
  {
    nome: "Diego",
    habilidades: ["Javascript", "ReactJS", "Redux"],
  },
  { nome: "Gabriel", habilidades: ["VueJS", "Ruby on Rails", "Elixir"] },
];

const mostrarNaTela = (usuarios) => {
  for (const user of usuarios) {
    const { nome, habilidades } = user;
    console.log(`O ${nome} possui as habilidades: ${habilidades.join(", ")}`);
  }
};

mostrarNaTela(usuarios);

// Dica : Para percorrer um vetor você deve utilizar a sintaxe for...of e para unir valores de um array com um separador utilize o join
