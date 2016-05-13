# raspi-wireless_socket
Operate wireless-sockets with a Raspberry Pi



Further Description
  - Operate your wireless-sockets with the Raspberry Pi and a generic 433Mhz transmition unit.
  Just install the programm on your Raspberry and run the following command with root-rights:
  
  "wifiplug [Remote(0-31)] [Plug(0-31)] [State(On/Off)]"
  
  - Remote: The dip-switch code of your remote-control
  - Plug: The right half dip-switch code of the individual wireless-plug
  - State: Determins the operation state of the individual wireless-plug
  
Example
  - "wifiplug 31 1 on" //Activates the first plug with remote-code 31

Dependencies
  - make
  - wiringpi

Installation
  - git clone https://github.com/paradigmn/raspi-wireless_socket.git
  - make
  - make install

Uninstallation:
  - make uninstall
