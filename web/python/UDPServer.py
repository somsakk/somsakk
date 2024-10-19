## UDPServer.py ##
# To call this code either type 'python3 UDPServer.py'
# or put server's port no. like 'python3 UDPServer.py 22002'

# this code runs under python3 (not python2)
'''This is UDP server, which waits for client message and convert the received
msg to upper letters, and then send the result back to the client'''

from socket import *
import sys

## Allow user's option to input port no.
if len(sys.argv) == 1:  # use the pre-specified port
	serverPort = 22000
elif len(sys.argv) == 2: # use user's specified port for the server to listen
	serverPort = int(sys.argv[1])

serverSocket = socket(AF_INET, SOCK_DGRAM)
serverSocket.bind(('', serverPort))

print('The server is (ip, port no.): ', serverSocket.getsockname())
print('The server is ready to receive.')

# loop forever to wait for connections from clients
while 1:
    message, clientAddress = serverSocket.recvfrom(2048)
    print('Received message from client ', clientAddress, ' is ', message.decode())
    modifiedMessage = message.decode().upper() # convert the message to uppercase
    serverSocket.sendto(modifiedMessage.encode(), clientAddress)

