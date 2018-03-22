#!/bin/bash
make -f MakeFinal.mk
./main
make -f MakeComm.mk
./prepCode