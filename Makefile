CXX = g++
CXXFLAGS = -std=c++2a -Wall -I h -I /usr/local/include/gtest/ -c
LXXFLAGS = -std=c++2a -Ih -pthread
OBJECTS = ./obj/aphw2.o ./obj/classroom.o ./obj/floor.o ./obj/main.o ./obj/aphw2_unittest.o
GTEST = /usr/local/lib/libgtest.a
TARGET = main


$(TARGET): $(OBJECTS)
	$(CXX) $(LXXFLAGS) -o $(TARGET) $(OBJECTS) $(GTEST)
./obj/aphw2.o: ./cpp/aphw2.cpp
	$(CXX) $(CXXFLAGS) ./cpp/aphw2.cpp -o ./obj/aphw2.o
./obj/classroom.o: ./cpp/classroom.cpp
	$(CXX) $(CXXFLAGS) ./cpp/classroom.cpp -o ./obj/classroom.o
./obj/floor.o: ./cpp/floor.cpp
	$(CXX) $(CXXFLAGS) ./cpp/floor.cpp -o ./obj/floor.o
./obj/aphw2_unittest.o: ./cpp/aphw2_unittest.cpp
	$(CXX) $(CXXFLAGS) ./cpp/aphw2_unittest.cpp -o ./obj/aphw2_unittest.o
./obj/main.o: ./cpp/main.cpp
	$(CXX) $(CXXFLAGS) ./cpp/main.cpp -o ./obj/main.o
clean:
	rm -fv $(TARGET) $(OBJECTS)
