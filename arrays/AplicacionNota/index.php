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
        session_start(); // Crea una sesión para ser usada por una petición GET o POST
        
        include_once 'db.php'; // Incluimos archivo de conexión con la DB
        
        // Función para verficar el login
        function verificar_login ($user,$password,&$result) {
            $sql = "SELECT * FROM usuarios WHERE usuario='$user' and '$password'='password'";
            $rec = mysql_query($sql);
            $count = 0;
            
            while ($row = mysql_fetch_object($rec)) {
                $count++;
                $result  = $row;
            }
            
            if ($count==1){
                return 1;
            } else {
                return 0;
            }    
        }
        
        /*
         * Cuando el boton de login sea precionado llamaremos a la función verificar_login() 
         * pasando los parametros ingresados.
         */
        
        if (!isset($_SESSION['user_id'])) {
            if (isset($_POST['login'])) {
                if (verificar_login($_POST['user'],$_POST['password'],$result)==1) {
                    $_SESSION['user_id'] = $result->id_user;
                    header("location:index.php");
                } else {
                    echo '<div class="error">Usuario no valido.</div>';
                }
                    
            }
            ?>
        
            <style type="text/css">
                *{
                    font-size: 14px;
                }
                body{
                background:#aaa;
                }
                form.login {
                    background: none repeat scroll 0 0 #F1F1F1;
                    border: 1px solid #DDDDDD;
                    font-family: sans-serif;
                    margin: 0 auto;
                    padding: 20px;
                    width: 278px;
                    box-shadow:0px 0px 20px black;
                    border-radius:10px;
                }
                form.login div {
                    margin-bottom: 15px;
                    overflow: hidden;
                }
                form.login div label {
                    display: block;
                    float: left;
                    line-height: 25px;
                }
                form.login div input[type="text"], form.login div input[type="password"] {
                    border: 1px solid #DCDCDC;
                    float: right;
                    padding: 4px;
                }
                form.login div input[type="submit"] {
                    background: none repeat scroll 0 0 #DEDEDE;
                    border: 1px solid #C6C6C6;
                    float: right;
                    font-weight: bold;
                    padding: 4px 20px;
                }
                .error{
                    color: red;
                    font-weight: bold;
                    margin: 10px;
                    text-align: center;
                }
            </style> 
        
            <form action="" method="post" class="login">
                <div><label>Usuario</label><input name="user" type="text"></div>
                <div><label>Contraseña</label><input name="password" type="password"></div>
                <div><input name="login" type="submit" value="login"></div>
            </form>
        
        <?php
        
        } else {
            echo 'Bienvenido.';
            echo '<a href="logout.php">Logout</a>';
        }
        ?>
        
    </body>
</html>
