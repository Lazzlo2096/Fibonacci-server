#include <iostream>
#include <boost/asio.hpp>

using namespace std;
using boost::asio::ip::tcp;

int main(int argc, const char *argv[])
{
	boost::asio::io_service io;

	tcp::endpoint ep(tcp::v4(), 9090);
	tcp::acceptor acc(io, ep);


	//{
		tcp::socket sk(io);
		acc.accept(sk); //Ждёт подключения

		string message = "hello!!))";

		boost::asio::write(sk, boost::asio::buffer(message));

		sk.close();
	//}

	//cout << "hello" << endl;
	
	return 0;
}
