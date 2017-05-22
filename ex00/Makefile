# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/22 22:06:18 by mmoliele          #+#    #+#              #
#    Updated: 2017/05/22 23:09:05 by mmoliele         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

appname := ex00

CXX := clang++
CXXFLAGS := -Wall -Werror -Wextra

srcfiles := $(shell find . -name "*.CPP")
objects  := $(patsubst %.C, %.o, $(srcfiles))

all: $(appname)

$(appname): $(objects)
	    $(CXX) $(CXXFLAGS) $(LDFLAGS) -o $(appname) $(objects) $(LDLIBS)

depend: .depend

.depend: $(srcfiles)
	    rm -f ./.depend
		    $(CXX) $(CXXFLAGS) -MM $^>>./.depend;

clean:
	    rm -f $(objects)

dist-clean: clean
	    rm -f *~ .depend

include .depend
