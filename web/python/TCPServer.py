## TCPServer.py ##

# To call this code either type 'python3 TCPServer.py'
# or put server's port no. like 'python3 TCPServer.py 12002'

# this code runs under python3.3 only (not python2.7)

from socket import *
import sys

## Allow user's option to input port no.
if len(sys.argv) == 1:  # use the pre-specified port
	serverPort = 12002
elif len(sys.argv) == 2: # use user's specified port for the server to listen
	serverPort = int(sys.argv[1])

serverSocket = socket(AF_INET,SOCK_STREAM)
serverSocket.bind(('',serverPort))
serverSocket.listen(1)

# Just want to see the socket info
print('The server is (ip, port no.): ', serverSocket.getsockname())

print('The server is ready to receive')

while True:
     connectionSocket, addr = serverSocket.accept()  
        
     sentence = connectionSocket.recv(1024).decode()
     print('Received message from client ', addr, ' is ', sentence)
     
     capitalizedSentence = sentence.upper()
     
     connectionSocket.send(capitalizedSentence.encode())
     
     connectionSocket.close()
