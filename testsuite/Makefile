# drmdecrypt testsuite
#
# This testsuite tries to decrypt recordings using drmdecrypt and
# then stores frames as png.
#
# If you want to add your recordings to the testsuite try to keep
# the recordings at 10-15 sec length.
#
# dependencies: ffmpeg

DRMDECRYPT?=	../drmdecrypt

TESTS=	UE40C6820/20210405094135.png \
	UE40C6820/20210405094210.png \
	UE40C6820/20210405094256.png \
	UE40C6820/20210405094338.png \
	UE40C6820/20210405094407.png \
	UE40C6820/20210405094530.png \
	UE40C6820/20210405094651.png \
	UE40C6820/20210405094739.png \
	UE40C6820/20210405094821.png \
	UE40C6820/20210405094858.png \
	UE40C6820/20210405094941.png \
	UE40C6820/20210405095022.png \
	UE40C6820/20210405095109.png \
	UE40C6820/20210405095155.png \
	UE40D5700/20210328171238.png

all:	$(TESTS)

%.ts:	%.srf
	$(DRMDECRYPT) -d -o $@ $<

%.png:	%.ts
	ffmpeg -i $< -ss 00:00:05 -vframes 1 $@

clean:
	rm -f */*.ts */*.png

.PHONY: all clean
