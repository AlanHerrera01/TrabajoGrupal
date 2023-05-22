numeros = []  # Declaración de la lista de números

# Agregar números a la lista
numeros.append(10)
numeros.append(20)
numeros.append(30)

# Mostrar los números de la lista
print("Números en la lista:")
for numero in numeros:
    print(numero, end=" ")
print()

# Insertar un número en una posición específica
numeros.insert(1, 15)

# Mostrar los números actualizados de la lista
print("Números en la lista después de la inserción:")
for numero in numeros:
    print(numero, end=" ")
print()

# Eliminar un número de la lista
numeros.remove(20)

# Mostrar los números actualizados de la lista
print("Números en la lista después de la eliminación:")
for numero in numeros:
    print(numero, end=" ")
print()
