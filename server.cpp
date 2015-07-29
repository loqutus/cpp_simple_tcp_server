#include <iostream>
#include <string>
#include <boost/asio.hpp>
const int PORT = 1024;
int main(){
    std::cout << "starting server on port " << PORT << std::endl;
    boost::asio::io_service io_service;
    boost::asio::ip::tcp::endpoint endpoint(boost::asio::ip::tcp::v4(), PORT);
    boost::asio::ip::tcp::acceptor acceptor(io_service, endpoint);
    boost::asio::ip::tcp::socket socket(io_service);
    std::cout << "server started" << std::endl;
    std::string response("Pong");
    while(true){
        acceptor.accept(socket);
        boost::asio::write(socket, boost::asio::buffer(response));
        socket.close();
    }
    return 0;
}
