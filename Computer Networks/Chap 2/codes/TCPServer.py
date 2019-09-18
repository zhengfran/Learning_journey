import socket
serverPort = 12000
serverSocket = socket(socket.AF_INET,socket.socket.SOCK_STREAM)
serverSocket.bind('',serverPort) #when anyone sends a packetto port 12000 at the IP address of the server, that packet will be directed to thissocket.
serverSocket.listen(1) # Theparameter specifies the maximum number of queued connections(at least 1)
print ("The server is ready to receive")
while 1:
    connectionSocket, addr = serverSocket.accept()
    sentence  = serverSocket.recv(1024)
    capitalizedSentence  = sentence.upper()
    serverSocket.send(capitalizedSentence) 
    connectionSocket.close()