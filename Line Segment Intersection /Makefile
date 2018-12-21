point: PointMain.o fraction.o point.o
	g++ -o point PointMain.o fraction.o point.o

PointMain.o: PointMain.cc fraction.cc point.cc point.h fraction.h
	g++ -c PointMain.cc

point.o: point.cc fraction.cc fraction.h point.h
	g++ -c point.cc

fraction.o: fraction.cc fraction.h
	g++ -c fraction.cc


