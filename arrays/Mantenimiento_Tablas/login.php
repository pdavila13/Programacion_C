<?php
$usuario = $_POST["n_usuario"];
$password = $_POST["pwd"];

$conexion = mysql_connect("localhost","root","PATbriela1313");
mysql_select_db("mantenimiento",$conexion);

$sql = "SELECT id_usuario FROM usuario WHERE nombre_usuario = '$usuario' and contrasenya = '$password'";
$comprobar = mysql_query($sql);

if(mysql_num_rows($comprobar) > 0 ) {
    $id_usuario = mysql_result($comprobar, 0);
    setcookie("misitio_userid","$id_usuario",time() + 3600);
    header("Location:inicio.php");
} else
        echo "Usuario o Contraseña incorrectos";
?>