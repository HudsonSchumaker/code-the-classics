compile:
	g++ -Wall -std=c++17 -O3 source/*.cpp -o game -I/opt/homebrew/include -L/opt/homebrew/lib -lSDL2 -lSDL2_image -lSDL2_ttf -lSDL2_mixer
	mv -f game build/

run:
	./build/game

bundle:
	g++ -Wall -std=c++17 source/*.cpp -o game -I/opt/homebrew/include -L/opt/homebrew/lib -lSDL2 -lSDL2_image -lSDL2_ttf -lSDL2_mixer
	mv -f game build/
	
	rm -r build/game.app

	mkdir -p game.app/Contents
	mkdir game.app/Contents/MacOS
	mkdir game.app/Contents/Resources

	touch game.app/Contents/Info.plist
	cp -r build/gameengine game.app/Contents/MacOS/
	cp data/iconbuilder.icns game.app/Contents/Resources/
	cp -r data game.app/Contents/Resources/

	echo "<?xml version="1.0" encoding="UTF-8"?><!DOCTYPE plist PUBLIC "-//Apple//DTD PLIST 1.0//EN" "http://www.apple.com/DTDs/PropertyList-1.0.dtd"><plist version="1.0"><dict><key>CFBundleIconFile</key><string>iconbuilder.icns</string><key>CFBundleExecutable</key><string>gameengine</string></dict> </plist>" >> game.app/Contents/Info.plist

	mv -f game.app build
	#open -a build/game.app

clean:
	rm build/game
