CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		antlr_parser.o

LIBS =

TARGET =	antlr_parser

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
