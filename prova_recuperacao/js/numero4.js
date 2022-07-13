function experiencia(anosEstudo) {
  switch (true) {
    case anosEstudo >= 0 && anosEstudo <= 1:
      console.log(
        `Você tem ${anosEstudo}} anos de experiencia, e você é: Iniciante`
      );
      break;
    case anosEstudo >= 1 && anosEstudo <= 3:
      console.log(
        `Você tem ${anosEstudo} anos de experiencia, e você:  Intermediário`
      );
      break;
    case anosEstudo >= 3 && anosEstudo <= 6:
      console.log(
        `Você tem ${anosEstudo} anos de experiencia, e você:  Avançado`
      );
      break;
    default:
      console.log(
        `Você tem ${anosEstudo} anos de experiencia, e você : Jedi Master `
      );
      break;
  }
}
var anosEstudo = 7;
experiencia(anosEstudo);
// De 0-1 ano: Iniciante
// De 1-3 anos: Intermediário
// De 3-6 anos: Avançado
// De 7 acima: Jedi Master
