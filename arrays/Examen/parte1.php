<?php
function primero ($numero) {
    $contador = 0;
    for($i=1;$i<=$numero;$i++) {
        if($numero % $i == 0) {
            if($contador > 1)
                $contador++;
            
                return false;
        }
    }
    return true;
}

function palabra ($cadena) {
    $cadena = strpos ("Havia una vegada");
    for($i=0;$cadena[$i];$i++)
        echo $cadena[$i],"<br>";
}

?>

