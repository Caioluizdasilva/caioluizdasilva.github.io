 function compara()
 {
    setTimeout( ()=> 
    {
          
          var cel1 = document.getElementById("cel1").value;
          var cel2 = document.getElementById("cel2").value;   
          var cel3 = document.getElementById("cel3").value;
          var cel4 = document.getElementById("cel4").value;
          var cel5 = document.getElementById("cel5").value;
          var cel6 = document.getElementById("cel6").value;
          var cel7 = document.getElementById("cel7").value;
          var cel8 = document.getElementById("cel8").value;
          var cel9 = document.getElementById("cel9").value;

        
              if(cel1 !="" && cel1 == cel2 && cel2 == cel3)
              {
                  window.alert(cel3 + " é o VENCEDOR" );
                  location.reload();
              }

        
              else if(cel4 !="" && cel4 == cel5 && cel5 == cel6)
              {
                  window.alert(cel6 + " é o VENCEDOR" );
                  location.reload();
              }
          
         
              else if(cel7 !="" && cel7 == cel8 && cel8 == cel9)
              {
                  window.alert(cel9 + " é o VENCEDOR" );
                  location.reload();
              }

         
              else if(cel1 !="" && cel1 == cel4 && cel4 == cel7)
              {
                  window.alert(cel7 + " é o VENCEDOR" );
                  location.reload();r
              }

        
              else if(cel2 !="" && cel2 == cel5 && cel5 == cel8)
              {
                  window.alert(cel8 + " é o VENCEDOR" );
                  location.reload();
              }
             
        

             
              else if(cel3 !="" && cel3 == cel6 && cel6 == cel9)
              {
                  window.alert(cel9 + " é o VENCEDOR" );
                  location.reload();
              }

        
              else if(cel1 !="" && cel1 == cel5 && cel5 == cel9)
              {
                  window.alert(cel9 + " é o VENCEDOR" );
                  location.reload();
              }
              else if(cel3 !="" && cel3 == cel5 && cel5 == cel7)
              {
                  window.alert(cel7 + " é o VENCEDOR" );
                  location.reload();
              }
              else if (cel1 !="" &&
                       cel2 !="" &&
                       cel3 !="" &&
                       cel4 !="" &&
                       cel5 !="" &&
                       cel6 !="" &&
                       cel7 !="" &&
                       cel8 !="" &&
                       cel9 !="" )
                       {
                          window.alert("FIM DO JOGO : Deu Velha");
                          location.reload();
     
                    }                   }, 50);
  } 