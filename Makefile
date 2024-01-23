all :
	@for cppdir in ./cpp*; do \
		for exdir in $$cppdir/ex*; do \
			make -C $$exdir; \
		done \
	done
	
fclean :
	@for cppdir in ./cpp*; do \
		for exdir in $$cppdir/ex*; do \
			make -C $$exdir fclean; \
		done \
	done

re :
	@for cppdir in ./cpp*; do \
		for exdir in $$cppdir/ex*; do \
			make -C $$exdir re; \
		done \
	done
