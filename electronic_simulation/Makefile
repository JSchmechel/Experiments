CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		electronic_simulation.o

LIBS =

TARGET =	electronic_simulation

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
