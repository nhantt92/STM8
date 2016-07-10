SDCC=sdcc
SDLD=sdld
OBJECTS=blinky.ihx

.PHONY: all clean flash

all: $(OBJECTS)

clean:
	rm -f $(OBJECTS)

flash: 
	stm8flash -c stlinkv2 -p stm8s003f3 -w $(OBJECTS)

%.ihx: %.c
	$(SDCC) -lstm8 -mstm8 --out-fmt-ihx $(CFLAGS) $(LDFLAGS) $<
