## TCPServer_persist_multiclients.py ##
## The TCP server now supports multiple concurrent persistent TCP connections 
## The main code uses threads.
# See examples of threading in 
# https://realpython.com/intro-to-python-threading/

# To call this code either type 'python3 TCPServer_persist_multiclients.py'
# or put server's port no. like
# 'python3 TCPServer_persist_multiclients.py 12000'

from socket import *
import sys
from _thread import *
import threading

## Allow user to input port no.
if len(sys.argv) == 1:  # use the pre-specified port
	serverPort = 12000
elif len(sys.argv) == 2: # use user's specified port
	serverPort = int(sys.argv[1])

serverSocket = socket(AF_INET,SOCK_STREAM)
serverSocket.bind(('',serverPort))
serverSocket.listen(1)

def client_thread(conn,addr):
    while 1:
        sentence = conn.recv(1024).decode()
        if sentence == 'exit':
            break
        print('Received message from server ', conn.getsockname(),' client',addr,' is ',sentence)
        capitalizedSentence = sentence.upper()
        conn.send(capitalizedSentence.encode())

    conn.close()
    
# Just want to see the socket info
print('The server is listeing at (ip, port no.): ', serverSocket.getsockname())
print('The server is ready to receive')

while 1:
    connSocket, client_addr = serverSocket.accept()
    print('Received connection from client ', client_addr)
    print('using the server (ip, port no.): ', connSocket.getsockname())

    start_new_thread(client_thread, (connSocket,client_addr,))
    # or alternatively
    # ~ x = threading.Thread(target=client_thread, args=(connSocket,client_addr,))
    # ~ x.start()
    
serverSocket.close()
