from scipy.io import wavfile
samplerate, data = wavfile.read('pop_16000.wav')

print ("{")
i=0
out = ""
for data_i in data:
	i=i+1
	out = out+str(data_i)+","
	if i==16:
		i = 0
		print(out)
		out = ""
print("}")

print(len(data))