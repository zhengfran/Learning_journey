### Transport Layer

- Relationship between the transport and network layers
- how two entities can communicate reliably over a medium that may lose and corrupt data
- controlling  the  transmission  rate  of  transport-layer  entities  in  order  to  avoid,  or recover from, congestion within the network. 

#### 3.1 Introduction and Transport-Layer Services

A transport-layer protocol provides for **logical communication** between application processes running on different hosts.

Application processes use the *logical communication* provided by the transport layer to send messages to each other, *free from the worry of the details* of the physical infrastructure used to carry these messages.

Transport layer protocols are implemented in the **end systems** but not in network routers.

- Receive application layer messages
- Break into small chunks and add transport layer header to each chunk, known as **segments**
- passes the segment to the network layer at the sending end system, segment is encapsulated within a network-layer packet (a **datagram**) 

##### 3.1.1 Relationship between Transport and Network Layers

 Transport-layer  protocol  provides  logical  communication  between *processes running  on  different hosts*.

Network-layer  protocol  provides  logical communication between *hosts*.

Within an end system, a transport protocol moves messages from application processes to the network edge(that is, the network layer) and vice versa, but it doesn’t have any say about how the messages are moved within the network core.

##### 3.1.2 Overview of the Transport Layer in the Internet

- UDP: unreliable, connectionless service 

- TCP: reliable, connection-oriented service

Transport-layer packet is a **segment**. 

The IP service model is a **best-effort delivery service**, also **unreliable service.**

Extending host-to-host delivery to process-to-process delivery is called **transport-layer multiplexing** and **demultiplexing**. 

- UDP services

  - process-to-process  data  deliver

  - error checking

- TCP services(In addition to UDP)

  - congestion control
  - flow control

#### 3.2 Multiplexing and Demultiplexing

