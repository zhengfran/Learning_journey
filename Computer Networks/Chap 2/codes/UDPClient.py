import socket
serverName = 'hostname' #either Ipaddress or hostname of the server
serverPort = 12000
clientSocket = socket.socket(socket.AF_INET,socket.SOCK_DGRAM) #create socket, IPv4 and UDP
#create datagra and sent
message = input('Input lowercase sentence:')
clientSocket.sendto(message,(serverName,serverPort))
#receive message
modifiedMessage, serverAddress = clientSocket.recvfrom(2048) # buffersize 2048
print(modifiedMessage)
#close
clientSocket.close()