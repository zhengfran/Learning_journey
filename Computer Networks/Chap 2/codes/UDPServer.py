import socket
serverPort = 12000
serverSocket = socket(socket.AF_INET,socket.SOCK_DGRAM)
serverSocket.bind('',serverPort) #when anyone sends a packetto port 12000 at the IP address of the server, that packet will be directed to thissocket.
print ("The server is ready to receive")
while 1:
    message,clientAddress = serverSocket.recvfrom(2048)
    modifiedMessage = message.upper()
    serverSocket.sendto(modifiedMessage, clientAddress) # ttaches the client’s address (IP address and port number) to the capi-talized message, and sends the resulting packet into the server’s socket