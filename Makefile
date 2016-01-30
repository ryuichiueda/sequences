CXX = g++
CXXFLAGS = -O3 -Wall
OBJS = fibonacci geometric

all: $(OBJS)

clean:
	$(RM) $(OBJS)

