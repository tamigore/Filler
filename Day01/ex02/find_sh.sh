#!/bin/sh
find . -name "*.sh" -print | tr "\/" " " | awk '{print $NF}' | sed "s/\.sh//"
