import os
import subprocess as sp

def getAllFiles(srcDir, filter):
    srcs = []
    for root, dirs, files in os.walk(srcDir):
        for file in files:
            if file.endswith(filter) and file != 'main.cpp':
                srcs.append(root + '/' + file)

        for dir in dirs:
            srcs += getAllFiles(dir,filter)

    return srcs


def compileSources(srcFiles):
    for src in srcFiles:
        pc = sp.Popen(['g++ -o obj/{0}.o -c {0}'.format(src)],shell=True)
        pc.wait()
        

def listToStr(files):
    string = ' '.join(files)
    return string

def build(lib, objs):
    objstr = listToStr(objs)
    pc = sp.Popen(['ar rcs bin/{0} {1}'.format(lib, objstr)],shell=True)
    pc.wait()
    

def main():
	sp.Popen(['mkdir -p {bin,obj/src}'],shell=True,executable='/bin/bash')

	sources = getAllFiles('src', '.cpp')

	compileSources(sources)

	objects = getAllFiles('obj', '.o')

	build('libmlogger.a', objects)

	print('Completed!')

main()
