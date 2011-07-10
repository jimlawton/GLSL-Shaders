
EXE = ogl2brick_linux
OBJS = draw.o ogl2brick.o shader.o

# release settings
#CFLAGS = -O2
#LFLAGS = -s

# debug settings
CFLAGS = -g
LFLAGS = -g

all: ${EXE}

${EXE}: ${OBJS}
	${LINK.cpp} ${LFLAGS} -o $@ ${OBJS} -lGLEW -lglut -lGL

clean:
	-rm -f ${OBJS}

clobber: clean
	-rm -f ${EXE}

