
test_objects = Ult1.o

# ver1: no mocking
# ----------------
prod_ver1_objects = File1.o File2.o File3.o
ult1_ver1_mock_objects =
ULT1_VER1_MOCK_FLAGS = 

# ver2: mock at leaf
# ------------------
prod_ver2_objects = File1.o File2.o
ult1_ver2_mock_objects = MockFile3.o
ULT1_VER2_MOCK_FLAGS = -DMOCK_FILE3

# ver3: mock at next level
# ------------------------
prod_ver3_objects = File1.o
ult1_ver3_mock_objects = MockFile2.o
ULT1_VER3_MOCK_FLAGS = -DMOCK_FILE2

File1.o: File1.c
	$(CC) -c $(CFLAGS) File1.c

File2.o: File2.c
	$(CC) -c $(CFLAGS) File2.c

File3.o: File3.c
	$(CC) -c $(CFLAGS) File3.c

Ult1.o: Ult1.c
	$(CC) -c $(CFLAGS) Ult1.c

$(ult1_ver1_mock_objects): %.o: %.c
	$(CC) -c $(ULT1_VER1_MOCK_FLAGS) $(CFLAGS) $< -o $@

$(ult1_ver2_mock_objects): %.o: %.c
	$(CC) -c $(ULT1_VER2_MOCK_FLAGS) $(CFLAGS) $< -o $@

$(ult1_ver3_mock_objects): %.o: %.c
	$(CC) -c $(ULT1_VER3_MOCK_FLAGS) $(CFLAGS) $< -o $@

Ult1Ver1.exe: $(prod_ver1_objects) $(test_objects) $(ult1_ver1_mock_objects)
	$(CC) $(prod_ver1_objects) $(test_objects) $(ult1_ver1_mock_objects) -g -o Ult1Ver1.exe

Ult1Ver2.exe: $(prod_ver2_objects) $(test_objects) $(ult1_ver2_mock_objects)
	$(CC) $(prod_ver2_objects) $(test_objects) $(ult1_ver2_mock_objects) -g -o Ult1Ver2.exe

Ult1Ver3.exe: $(prod_ver3_objects) $(test_objects) $(ult1_ver3_mock_objects)
	$(CC) $(prod_ver3_objects) $(test_objects) $(ult1_ver3_mock_objects) -g -o Ult1Ver3.exe

clean:
	rm -f *.o *.exe *~ .*~
