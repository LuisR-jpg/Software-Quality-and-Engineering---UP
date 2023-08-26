<?php
    $accion = "";
    if(isset($_POST['Accion'])) {
        $accion = $_POST['Accion'];
    }
    if(isset($_GET['Accion'])) {
        $accion = $_GET['Accion'];
    }
    if($accion == 'Guardar'){
        $mysqli = new mysqli("localhost", "alumnos", "app.2023", "lalito");
        $sentencia = $mysqli -> prepare("INSERT INTO Peliculas (Id, Nivel, Titulo, Ao, Votos) VALUES (0, ?, ?, ?, ?)");
        // isii: integer, string, integer, integer
        $sentencia -> bind_param("isii", $_POST['Nivel'], $_POST['Titulo'], $_POST['Ao'], $_POST['Votos']);
        $sentencia -> execute();
    }
?>