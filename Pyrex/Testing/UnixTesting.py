##   Pyrex - Generic Unix testing support#from os import system, WIFEXITED, WEXITSTATUSimport sysversion = "%s.%s" % sys.version_info[:2]def run_python_file(pyfile, outfile, errfile):	status = system("python%s %s > %s 2> %s" % (version, pyfile, outfile, errfile))	if WIFEXITED(status):		status = WEXITSTATUS(status)	return statusdef mark_item(path, status):	passdef item_mark(path):	return "untested"