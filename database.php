<?php 
 $host = "localhost";
 $username = "root";
 $password = "";
 $database = "ProductMemo";
 $proname=$_POST[' ProductNo ']; 
 $price=$_POST['Description '];
 $qty=$_POST[' Price '];
 $con = mysqli_connect( $host, $username, $password, $database) or die("Couldn't connect to the database");
 $insert= "insert into Product(Prouct No,Description,Price) Values ('$ ProductNo ', '$ Description ','$ Price ')";
 mysqli_query($con,$insert);
?>
