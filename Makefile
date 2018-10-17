CFLAGS=-Os -Wall
DOCCO=docco
LDLIBS=/usr/local/lib/libwiringPi.so

usbscale: phone.c 
	$(CC) $(CFLAGS) $< $(LDLIBS) -o $@

docs: phone.c
	$(DOCCO) phone.c

clean:
