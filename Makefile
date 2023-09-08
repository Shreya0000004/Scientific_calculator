CC = g++
CFLAGS = -Wall

# List of source files
SRCS = main.cpp calculator.cpp

# Output binary
TARGET = calculator_exe

$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRCS)

clean:
	rm -f $(TARGET)

