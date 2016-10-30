<?php

if(isset($_POST[1]))
{
	exec("sudo wifiplug 31 1 on");
}

elseif(isset($_POST[2]))
{
	exec("sudo wifiplug 31 1 off");
}

elseif(isset($_POST[3]))
{
	exec("sudo wifiplug 31 2 on");
}

elseif(isset($_POST[4]))
{
	exec("sudo wifiplug 31 2 off");
}

elseif(isset($_POST[5]))
{
	exec("sudo wifiplug 31 3 on");
}

elseif(isset($_POST[6]))
{
	exec("sudo wifiplug 31 3 off");
}

elseif(isset($_POST[7]))
{
	exec("sudo wifiplug 31 4 on");
}

elseif(isset($_POST[8]))
{
	exec("sudo wifiplug 31 4 off");
}

elseif(isset($_POST[98]))
{
	exec("sudo wifiplug 31 1 on");
	exec("sudo wifiplug 31 2 on");
	exec("sudo wifiplug 31 3 on");
	exec("sudo wifiplug 31 4 on");
}

elseif(isset($_POST[99]))
{
	exec("sudo wifiplug 31 1 off");
	exec("sudo wifiplug 31 2 off");
	exec("sudo wifiplug 31 3 off");
	exec("sudo wifiplug 31 4 off");
}

?>
