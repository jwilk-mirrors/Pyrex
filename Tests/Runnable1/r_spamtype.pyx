cdef class Spam:

	cdef int tons
	
	def __cinit__(self):
		self.tons = 17
	
	def __dealloc__(self):
		print self.tons, "tons of spam is history."
	
	def get_tons(self):
		return self.tons
	
	def set_tons(self, x):
		self.tons = x
