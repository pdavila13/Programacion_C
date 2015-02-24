<?php
    @ $db = mysqli_connect('localhost', 'root', 'PATbriela1313', 'mysql') or die("No se ha podido abrir la Base de Datos");

    if (!$_GET) {
    $result = mysqli_query($db, "SHOW TABLES");
    mostrarRegistros($result, true);
    } 

    function mostrarRegistros($result, $editar) {
    $primero = true;
    while ($row = mysqli_fetch_assoc($result)) {
        // Solo para el primer registro, mostramos los emcabezados con el nombre del campo
        if ($primero) {
            $key = array_keys($row);
            print "<table border='1'><tr>";
            foreach ($key as $ele) {
                print "<th>" . $ele . "</th>";
            }
            print "</tr>";
            $primero = false;
        }
        // Para cada registro muestro todas las columnas
        // Selecciono la primera columa como llave (identificador del registro)
        print "<tr>";
        $llave = null;
        foreach ($row as $ele) {
            print "<td>" . $ele . "</td>";
            if (is_null($llave)) {
                $clau = $ele;
            }
        }
    }
    // Si se ha encontrado registro, cerramos el tag HTML de la tabla
    if (!$primero) {
        print "</table>";
    }
}
?>