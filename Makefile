VERSION = 0.9.6.3

version:
	@echo "Setting version to $(VERSION)"
	@echo "version = '$(VERSION)'" > Pyrex/Compiler/Version.py

clean:
	@echo Cleaning Source
	@rm -f *.pyc */*.pyc */*/*.pyc 
	@rm -f *~ */*~ */*/*~
	@rm -f core */core
	@(cd Demos; $(MAKE) clean)
