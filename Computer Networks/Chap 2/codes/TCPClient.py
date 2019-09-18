import socket
serverName = 'hostname' #either Ipaddress or hostname of the server
serverPort = 12000
clientSocket = socket.socket(socket.AF_INET,socket.SOCK_STREAM) #create socket, IPv4 and TCP
clientSocket.connect((serverName,serverPort))
#create datagra and sent
sentence = input('Input lowercase sentence:')
clientSocket.send(sentence)
#receive message
modifiedMessage, serverAddress = clientSocket.recv(1024) # buffersize 2048
print(modifiedMessage)
#close
clientSocket.close()