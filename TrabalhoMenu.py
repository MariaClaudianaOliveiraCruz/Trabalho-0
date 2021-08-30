
# inicio Funcao ler numero

def ler_numeros():
       a= float(input('Digite o primeiro número '))
       b= float(input('Digite o segundo número '))
       return a, b
    
# fim Funcao ler numero

# inicio Funcao ler velocidade

def ler_velocidade():
       v= float(input('Digite a velocidade em Km/h:  '))
       return v
    
# fim Funcao ler velocidade

# inicio Funcao ler somadeznumero

def ler_somadeznum():
       a= float(input('Digite o 1 número:  '))
       b= float(input('Digite o 2 número:  '))
       c= float(input('Digite o 3 número:  '))
       d= float(input('Digite o 4 número:  '))
       e= float(input('Digite o 5 número:  '))
       f= float(input('Digite o 6 número:  '))
       g= float(input('Digite o 7 número:  '))
       h= float(input('Digite o 8 número:  '))
       i= float(input('Digite o 9 número:  '))
       j= float(input('Digite o 10 número: '))
       
       return a, b, c, d, e, f, g, h, i, j

# fim Funcao ler somadeznumero

# inicio Funcao mostrar menu

def mostrar_menu():   
    print('------------------------')
    print(' Trabalho Programa Com Menu')
    print('------------------------')
    print(' 1 - Soma de números')
    print(' 2 - Verificar velocidade')
    print(' 3 - Soma de dez numeros')
    print(' 4 - Sair')
    print('------------------------')
    
# fim Função mostrar menu

cont = True
while cont:

    mostrar_menu()

    opcao = input('Digite uma opção ')

    if opcao == '1':
       a, b = ler_numeros()
       c= a + b
       print('     ')
       print('A soma dos números é: ')
       print('{} + {} = {}'.format(a, b, c))
       print('     ')
        
    elif opcao == '2':
       v = ler_velocidade()
       if v <= 80:
           print('     ')
           print('Você não foi multado. ')
           print('     ')
       else:
           print('     ')
           print('Você foi multado!!! ')
           print('     ')

    elif opcao == '3':
       
       a, b, c, d, e, f, g, h, i, j = ler_somadeznum()

       Soma = a + b + c + d + e + f + g + h + i + j
       print('     ')
       print('A soma dos números é: ')
       print('     ')
       print('{} + {} + {} + {} + {} + {} + {} + {} + {} + {} = {}'.format(a, b,c, d, e, f, g, h, i, j, Soma))
       print('     ')

    elif opcao == '4':
       print('     ')
       print('Bye Bye!')
       print('     ')
       cont = False

    else:
       print('     ')
       print('Essa opção é inválida! ')
       print('     ')

    input('Tecle ENTER para continuar... ')
       

