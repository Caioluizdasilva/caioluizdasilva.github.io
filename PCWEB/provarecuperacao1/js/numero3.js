function temHabilidade(habs) {
    return habs.some((hab) => hab.toLowerCase() === "javascript");
  }
  
  var skills = ["Boostrap", "React", "CSS", "HTML"];
  
  console.log(temHabilidade(skills));