#
# Copyright (C) 2009 Niek Linnenbank, 2012 Felipe Cabrera, 2014 Daniel Martin
# 
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
# 
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.
#

import datetime
import os
import platform
import re
import SCons
import build

#
# Retrieves Subversion information.
#
def info_receiver(path, info, pool):

    global currentRev, url
    
    currentRev = current + "-r" + str(info.rev)
    url = str(info.URL)

# Read current version.
current    = open("VERSION").read().strip()
expr       = re.compile("\.")
version      = expr.split(current)
versionCode  = 0
versionPower = 16
url          = None

# Calculate version code.
for v in version:
    versionCode  += int(v) * pow(2, versionPower)
    versionPower -= 8


    currentRev = current + "-Stable"

# Attempt to retrieve the correct compiler version
try:
    compiler = os.popen(build.target['CC'] + " --version | head -n 1").read().strip()
except:
    compiler = build.target['CC'] + ' ' + build.target['CCVERSION']

#
# Converts the into to a string, and escapes double quotes.
#
def escape(obj):

    return str(obj).replace('"', '\\"')

#
# Regenerate version header file.
#
def regenerateHeader():

    # Open versioning file for writing.
    out = open("include/Version.h", "w")
    out.write('#ifndef __VERSION_H\n' \
	      '#define __VERSION_H\n' \
	      '\n' \
	      '#define VERSIONCODE ' + escape(versionCode) + '\n' \
    	      '#define VERSION(a,b,c) (((a) << 16) + ((b) << 8) + (c))\n' \
	      '#define RELEASE   "' + escape(currentRev) + '"\n' \
	      '#define COPYRIGHT "Copyright (C) ' + escape(datetime.datetime.today().year) + ' Amaya OS Team\\r\\n\\r\\n" \\\n' \
              '\n' \
	      '#define COMPILER  "' + escape(compiler) + '"\n' \
	      '#define DATETIME  "' + escape(datetime.datetime.today()) + '"\n' \
	      '#define ARCH      "' + escape(os.readlink("include/Fnx")) + '"\n' \
	      '\n' \
	      '#define BUILDUSER "' + escape(os.environ['USER']) + '"\n' \
	      '#define BUILDHOST "' + escape(platform.node()) + '"\n' \
	      '#define BUILDOS   "' + escape(platform.system()) + ' ' + escape(platform.release()) + '"\n' \
	      '#define BUILDARCH "' + escape(platform.machine()) + '"\n' \
	      '#define BUILDCPU  "' + escape(platform.processor()) + '"\n' \
	      '#define BUILDPY   "Python ' + escape(platform.python_version()) + '"\n' \
	      '#define BUILDER   "SCons ' + escape(SCons.__version__) + '"\n' \
	      '#define BUILDPATH "' + escape(os.getcwd()) + '"\n')

    # Include SVN repository, if available.
    if url is not None:
	out.write('#define BUILDURL  "' + escape(url) + '"\n')
    else:
	out.write('#define BUILDURL  BUILDPATH\n')

    # Terminate #ifndef.
    out.write('\n' \
	      '#endif\n')
    # Done writing.
    out.flush()
    out.close()
