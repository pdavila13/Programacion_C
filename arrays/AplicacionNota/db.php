<?php

/*
 * La funcion define como su nombre lo dice, se usa para definir una constante nominada, 
 * que nos permite almacenar valores escalares(string, integer, float, boolean y nulos) 
 * y su estructura es: define(CONSTANTE,VALOR); 
 */

//Datos para connectanos a la base de datos
define('DB_SERVER','localhost');
define('DB_NAME','AplicacionNotas');
define('DB_USER','root');
define('DB_PASS','PATbriela1313');

$con = mysql_connect(DB_SERVER,DB_USER_DB_PASS); //mysql_connect = abrirá una conexión al servidor MySQL
mysql_select_db(DB_NAME,$con); //mysql_select = selecciona la base de datos

?>