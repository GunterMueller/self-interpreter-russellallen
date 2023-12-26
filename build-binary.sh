#!/bin/env sh
poetry run python3 -m nuitka --follow-imports src/REPL.py -o repl
## rm -r REPL.build
