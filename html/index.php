<!DOCTYPE html>
<html>
	<head>
		<meta name="viewport" content="width=device-width" />
		<meta charset="UTF-8">
		<title>Funksteckdosen schalten</title>
		<link rel="stylesheet" href="styles.css">
	</head>
	<body>
		<?php	include 'vars.php'; include 'func.php';	?>
		<center>
				<form method="post" action="index.php">
					<input type="submit" value="<?php echo $device1; ?> on" name="1">
					<input type="submit" value="<?php echo $device1; ?> off" name="2">
					</br>
					<input type="submit" value="<?php echo $device2; ?> on" name="3">
					<input type="submit" value="<?php echo $device2; ?> off" name="4">
					</br>
					<input type="submit" value="<?php echo $device3; ?> on" name="5">
					<input type="submit" value="<?php echo $device3; ?> off" name="6">
					</br>
					<input type="submit" value="<?php echo $device4; ?> on" name="7">
					<input type="submit" value="<?php echo $device4; ?> off" name="8">
					</br></br>
					<input type="submit" value="<?php echo $all; ?> on" name="98">
					<input type="submit" value="<?php echo $all; ?> off" name="99">
					</br></br></br>
					<input type="range" min="0" max="255" value="0" step="1" />
					</br>
					<input type="range" min="0" max="255" value="0" step="1" />
					</br>
					<input type="range" min="0" max="255" value="0" step="1" />
					</br>
				</form>
		</center>
	</body>
</html>
