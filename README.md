## ft_printf

<p>O projeto ft_printf, como o próprio nome sugere, tem como objetivo replicar a função printf.</p>

Protótipo da função ft_printf:
```
int	ft_printf(const char *s, ...)
```

<br>

### ft_printf flags

<p>O printf possui algumas flags que induzem seu funcionamento, sendo elas as responsáveis pela conversão de argumentos transmitidos como parâmetro.</p><br>

flag %c

> Argumento do tipo int, que retorna um caractere.

<br>

flag %s

> Argumento do tipo char*, que retorna uma string.

<br>

flag %p

> Argumento do tipo void*, que retorna um ponteiro.

<br>

flag %d

> Argumento do tipo int, que retorna um decimal com sinal.

<br>

flag %i

> Argumento do tipo int, que retorna um decimal com sinal.

<br>

flag %u

> Argumento do tipo unsigned int, que retorna um decimal sem sinal.

<br>

flag %x

> Argumento do tipo unsigned int, que retorna um hexadecimal com caracteres minúsculos.

<br>

flag %X

> Argumento do tipo unsigned int, que retorna um hexadecimal com caracteres maiúsculos.

<br>

flag %%

> Retorna um "%".

<br>

### ft_printf conceitos

FUNÇÃO VARIÁDICA

Uma função variádica é passível de receber diversos argumentos dentro de sua declaração, sendo representada pela "variável" ```...```.
O funcionamento de uma função variádica é possível graças aos macros ```va_list```, ```va_start```, ```va_arg``` e ```va_end```.<br>

A primeira figurinha de uma função variádica é a ```va_list```, macro utilizado como variável cuja função é "armazenar" todos os argumentos de nossa função.
O macro ```va_start``` é responsável por assegurar que todas nossos argumentos serão utilizados em nosso programa. Por padrão, o va_start integra nossos argumentos a uma condição imposta por uma variável.
Após a "inicialização" de nossos argumentos, sempre que os utilizarmos teremos que usar o macro ```va_arg```, responsável por sua declaração e utilização.
Por fim, o macro ```va_end``` encerra a operação de nossos argumentos, definindo um resultado.</<br>

<p>Logo, uma estrutura variádica pode ser escrita da seguinte forma:</p><br>

```
size_t	variadic(size_t s, ...){
	va_list args;
	/*armazena nossos argumentos*/
	int i = 0;
	int val = 0;

	va_start(args, s);
	/*integra nossos argumentos*/
	for(i = 0; i < s; i++){
		val += va_arg(args, int);
		/*declara e utiliza nosso arumento*/
	}
	va_end(args);
	/*encerra nossa operação, definindo um resultado*/
	return val;
}

int	main(void){
	printf("A soma de 1, 7 e 4 é igual a %d\n", variadic(3, 1, 7, 4));
	/*o programa irá receber 3 arumentos adicionais, 1, 7 e 4*/
	return 0;
}
```

<br>
<p>O printf é o resultado de uma função variádica, em que, após a localização de um "%" é possível atribuir diversos argumentos de conversão a seu retorno.</p>

<br>
<br>

### ft_printf tester

O testador mais utilizado para testar seu projeto do printf é o <a href="https://github.com/Tripouille/printfTester">Tripouille</a>, sendo importante ressaltar que um dos testes de ponteiro (make p - teste 09) so será correto em um ambiente MAC/IOS.

<br>
<br>

##### CRÉDITOS

<p>MCoscia<br>
Matheus Coscia / / designer gráfico</p>
