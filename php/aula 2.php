<html>
    <head><title>Delimitadore PHP</title></head>
    <body>
        <?php
           //numeros inteiros(integer ou long)
           $idade = 40; //integer
           $titulosMundiaisDoVasco = 0; //integer no estilo camel case
           $num = -123; //base decimal negativo
           
           echo "$num"."<br>";
           $num = 0123; //base octal
           echo "$num"."<br>";
           $num = 0x7B; //base hexadecimal
           echo "$num"."<br>";

           //numeros reais
           $precoDaCamisaDoFluminense = 1.99; // real positivo
           $valor = -1.9; //real negativo

           //Booleanos - true ou false
           $maiorDeIdade = true;
           $x = false;
           $dezEhMaiorQueNove = (10 > 9);

           //Cadeia de Caracteres
           $nome = 'Fulano';
           $nome = "fulano";

           $salario = 2000.00;
           echo "R\$ " .$salario. "<br>";

           $cerveja = 'Antártica';
           echo "Rafael estava com sede de tomou doze " .$cerveja. "s <br>";

           $usuario = 'Juca';
           echo "olá $usuario! </br>";

           $idade = 20;
           $altura = 1.81;
           echo "Idade: " .$idade. " Altura: " .$altura. "</br>";

           $num = 1 + '10.5';
           echo $num . '</br>';

           $num = 1 + '-1.3e3';
           echo  $num . '</br>';

           $num = 1 + '10';
           echo  $num . ' porquinhos </br>';

           $num = 200;
       /*
           settype($num, 'int'); 
           settype($num, 'integer');
           settype($num, 'bool');
           settype($num, 'boolean');
           settype($num, 'string');
           $num = (binary) $num;
           //settype($num, 'binary');
           settype($num, 'array');
           settype($num, 'object');
           */

          $valor = 'true';

          if( is_int ($valor) ){
              echo "inteiro </br>";
          }else{
              echo "não inteiro </br>";
          }

          if( is_float ($valor) ){
           echo "decimal </br>";
       }else{
           echo "não decimal </br>";
       }
           
       if( is_bool ($valor) ){
           echo "boleano </br>";
       }else{
           echo "não boleano </br>";
       }

       if( is_string ($valor) ){
           echo "texto </br>";
       }else{
           echo "não texto </br>";
       }

       $a = 1.99;
       $b = true;

       var_dump($a);
       echo "</br>";
       var_dump($b);
       echo "</br>";

       if (isset ($b)) echo '$b existe </br>';
       else echo '$b não existe ou é nula </br>';
       
       $b = null;

       if (isset ($b)) echo '$b existe </br>';
       else echo '$b não existe ou é nula </br>';

       if (empty ($a)) echo '$a existe </br>';
       else echo '$a não existe ou é nula </br>';
       ?>
    </body>
</html>
