all:share_info

share_info:main.cpp
	g++ -g main.cpp -o share_info

clean:
	rm -rf share_info
