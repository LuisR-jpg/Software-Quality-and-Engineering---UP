<?php
    if($_POST['Accion'] == 'Guardar'){
        $mysqli = new mysqli("localhost", "alumnos", "app.2023", "lalito");
        $sentencia = $mysqli -> prepare("INSERT INTO Peliculas (Id, Nivel, Titulo, Ao, Votos) VALUES (0, ?, ?, ?, ?)");
        // isii: integer, string, integer, integer
        $sentencia -> bind_param("isii", $_POST['Nivel'], $_POST['Titulo'], $_POST['Ao'], $_POST['Votos']);
        $sentencia -> execute();
    }
    /*
    else if($_POST['Accion'] == 'Borrar'){
        
    }
    */
?>