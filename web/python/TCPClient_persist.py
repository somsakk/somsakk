## TCPClient_persist.py ##
## TCPP Client allowing user to enter multiple sentences ##
## It uses persistent TCP connection. ##
## To exit, enter the sentence as 'exit' ##

# To call this code either type 'python3 TCPClient_persist.py'
# or put server's ip and port no. like
# 'python3 TCPClient_persist.py 127.0.0.1 12000'

from socket import *
import sys

## Allow user to input server's ip and port no.
if len(sys.argv) == 1:  # the server is localhost and at port 12000  
	serverName = '127.0.0.1'
	serverPort = 12000
elif len(sys.argv) == 3: # use other server's address and port
	serverName = sys.argv[1]
	serverPort = int(sys.argv[2])

clientSocket = socket(AF_INET, SOCK_STREAM)
clientSocket.connect((serverName,serverPort))

# Just want to see the socket info
print('The clinet is (ip, port no.): ', clientSocket.getsockname())

while 1:
        message = input('Input lowercase sentence:')
        clientSocket.send(message.encode())

        if message == 'exit':
                break
        
        modifiedMessage = clientSocket.recv(1024)
        print('From Server: ', modifiedMessage.decode())
clientSocket.close()
