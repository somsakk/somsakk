## UDPClient_persist.py ##
## UDP Client allowing user to enter multiple sentences ##
## To exit, enter the sentence as 'exit' ##

# To call this code either type 'python3 UDPClient_persist.py'
# or put server's ip and port no. like
# 'python3 UDPClient_persist.py 127.0.0.1 12000'
# or 'python3 UDPClient_persist.py localhost 12000'

# this code runs under python3.3 only (not python2.7)

from socket import *
import sys

## Allow user to input server's ip and port no.
if len(sys.argv) == 1:  # the server is localhost and at port 12000  
	serverName = '127.0.0.1'
	serverPort = 12002
elif len(sys.argv) == 3: # use other server's address and port
	serverName = sys.argv[1]
	serverPort = int(sys.argv[2])

# open a socket for connectionless connection (DATAGRAM)
# Note that since we are using UDP, which does no connection setup, 
# we won't know if the connection is there before we actually set the message
clientSocket = socket(AF_INET, SOCK_DGRAM)

while 1:
	# get a message from the user
	message = input('Input lowercase sentence:')  
	
	if message == 'exit':
		break

	# send the message to the udpserver
	clientSocket.sendto(message.encode(),(serverName, serverPort))

	# receive the modified message back from the server, the buffer size 
	# is 2048 bytes. Hence, the rcvd msg should be smaller than this. 
	modifiedMessage, serverAddress = clientSocket.recvfrom(2048)

	print('Received message from server ', serverAddress, ' is ', modifiedMessage.decode())

# close the socket
clientSocket.close()
