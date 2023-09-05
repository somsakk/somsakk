## TCPClient.py ##

# To call this code either type 'python3 TCPClient.py'
# or put server's ip and port no. like
# 'python3 TCPClient.py 127.0.0.1 12000'
# or 'python3 TCPClient.py localhost 12000'

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

clientSocket = socket(AF_INET, SOCK_STREAM)
clientSocket.connect((serverName,serverPort))

# Just want to see the socket info
print('The clinet is (ip, port no.): ', clientSocket.getsockname())

sentence = input('Input lowercase sentence:')

clientSocket.send(sentence.encode())

modifiedSentence = clientSocket.recv(1024)

print('From Server: ', modifiedSentence.decode())

clientSocket.close()
