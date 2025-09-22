# Compilador e flags
CXX = g++
CXXFLAGS = -O2 -Wall -Wextra

# Nome do executável
TARGET = program

# Arquivos-fonte e objetos
SRCS = point2D.cpp text_pixel.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)

# Regra padrão (compilar tudo)
all: $(TARGET)

# Linkagem final
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

# Regra genérica para compilar qualquer .cpp -> .o
%.o: %.cpp %.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpeza
clean:
	rm -f $(OBJS) $(TARGET)
