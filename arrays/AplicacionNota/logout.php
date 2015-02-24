<!DOCTYPE html>
<!--
To change this license header, choose License Headers in Project Properties.
To change this template file, choose Tools | Templates
and open the template in the editor.
-->
<html>
    <head>
        <meta charset="UTF-8">
        <title></title>
    </head>
    <body>
        <?php
        /*
         * Este archivo realizará el cierre de sesión.
         */
        
        session_start();
        session_destroy(); //Destruye toda la info registrada de una variable se sesión
        
        header('location: index.php'); //Redirecciona al usuario al index.php
        
        ?>
    </body>
</html>