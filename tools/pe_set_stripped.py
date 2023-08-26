import os
import pefile
import sys

os.rename(sys.argv[1], sys.argv[1] + '.bak')
pe = pefile.PE(sys.argv[1] + '.bak')
pe.FILE_HEADER.Characteristics |= pefile.IMAGE_CHARACTERISTICS['IMAGE_FILE_DEBUG_STRIPPED']
pe.write(filename=sys.argv[1])
