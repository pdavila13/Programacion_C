<?php
if(isset($_COOKIE["misitio_userid"])) {
    header("Location:mantenimiento.php");
    echo "Usuario con sesi&oacute;n iniciada";
    
} else
    echo "<h1 align='center'>Mantenimiento de tablas en MySQL";
    echo "<hr>";
    echo "<a href='iniciarsesion.html'> Iniciar Sesi&oacute;n </a>";
?>