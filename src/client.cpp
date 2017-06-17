#include <iostream>
#include <boost/asio.hpp>

using namespace std;
using boost::asio::ip::tcp;

int main(int argc, const char *argv[])
{
	boost::asio::io_service io;

	tcp::endpoint ep(
		boost::asio::ip::address::from_string("127.0.0.1"), 
		9090
	);
	tcp::socket sk(io);

	sk.connect(ep);


	boost::asio::streambuf sbuf; 
	//boost::read()
	read_until(sk, sbuf, ")");
	cout << &sbuf << endl;

	sk.close();
	
	return 0;
}
