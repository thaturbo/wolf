from distutils.core import setup
setup(name='WOLFspendfrom',
      version='1.0',
      description='Command-line utility for wolf "coin control"',
      author='Gavin Andresen',
      author_email='gavin@wolffoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
