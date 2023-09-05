## TCPServer_persist.py ##
## TCP server with sinle persistent TCP connection ##
## It doesn't support multiple concurrent client TCP connections  

# To call this code either type 'python3 TCPServer_persist.py'
# or put server's port no. like
# 'python3 TCPServer_persist.py 12000'

# this code runs under python3.3 only (not python2.7)

from socket import *
import sys

## Allow user to input port no.
if len(sys.argv) == 1:  # use the pre-specified port
	serverPort = 12000
elif len(sys.argv) == 2: # use user's specified port
	serverPort = int(sys.argv[1])

serverSocket = socket(AF_INET,SOCK_STREAM)
serverSocket.bind(('',serverPort))
serverSocket.listen(1)

# Just want to see the socket info
print('The server is (ip, port no.): ', serverSocket.getsockname())

print('The server is ready to receive')

while 1:
    connectionSocket, addr = serverSocket.accept()
    
    while 1:
        sentence = connectionSocket.recv(1024).decode()
        if sentence == 'exit':
            break
        print('Received message from client ', addr, ' is ', sentence)

        capitalizedSentence = sentence.upper()

        connectionSocket.send(capitalizedSentence.encode())
	
    connectionSocket.close()
	
