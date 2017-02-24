TARGET := main
all:$(TARGET)
clean:
	rm *.o $(TARGET)
.PHNOY:all clean
main:main.cpp
