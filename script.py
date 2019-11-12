import numpy as np
import matplotlib.pyplot as plt

w = 0.1
h = np.array([0.1, 0.01, 1])
dt = h/w

plt.figure(figsize=(10,5))
plt.subplot(1,2,1)
for i in range(3):
    data = np.loadtxt('Euler'+str(i+1)+'.dat')
    plt.plot(data[:,0],data[:,1],label='$\Delta t=$'+str(dt[i])[:4])
plt.legend()
plt.xlabel('t')
plt.ylabel('y(t)')
plt.title('Método Explícito')
plt.subplot(1,2,2)
for i in range(3):
    data = np.loadtxt('Implicit'+str(i+1)+'.dat')
    plt.plot(data[:,0],data[:,1],label='$\Delta t=$'+str(dt[i])[:4])
plt.legend()
plt.xlabel('t')
plt.ylabel('y(t)')
plt.title('Método Implícito')
plt.savefig('graficas.png')