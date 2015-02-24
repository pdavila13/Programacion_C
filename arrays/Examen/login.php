<!DOCTYPE html>

<html>
    <head>
        <meta charset="UTF-8">
        <title>Login</title>
    </head>
    <body>
        <table width="35%" align="center" border="0" cellspacing="0" cellpadding="0">
            <tr>
                <td>
                    <form method="POST" action="">
                        <fieldset>
                            <legend> Iniciar Sesión </legend>
                                <label for="n_usuario">Usuario: </label><input type="text" name="n_usuario" id="n_usuario"/><br/>
                                <label for="pwd">Contraseña: </label><input type="password" name="pwd" id="pwd"/><br/>
                                <input type="submit" value="Iniciar Seción"/>
                        </fieldset>
                    </form>
                </td>
            </tr>
        </table>
        
        <?php
//        $usuario = $_POST["n_usuario"];
//        $password = $_POST["pwd"];
//
//        $conexion = mysql_connect("localhost","root","PATbriela1313");
//        mysql_select_db("mantenimiento",$conexion);
//
//        $sql = "SELECT id_usuario FROM usuario WHERE nombre_usuario = '$usuario' and contrasenya = '$password'";
//        $comprobar = mysql_query($sql);

        if(mysql_num_rows($comprobar) > 0 ) {
            $id_usuario = mysql_result($comprobar, 0);
            setcookie("misitio_userid","$id_usuario",time() + 3600);
        } else
                echo "Error al identificarse";
        
        if(isset($_COOKIE["misitio_userid"])) {
            header("Location:index.php");
            echo "Usuario con sesi&oacute;n iniciada";}
        ?>
        
    </body>
</html>


LxWqej5WG6FU2