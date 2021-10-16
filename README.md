## ft_printf

<p>O projeto ft_printf, como o próprio nome sugere, tem como objetivo replicar a função printf.</p>

Protótipo da função ft_printf:
```
int	ft_printf(const char *s, ...)
```

<br>
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

<br>
<br>

### ft_printf conceitos

FUNÇÃO VARIÁDICA



<br>
<br>

### ft_printf tester

O testador mais utilizado para testar seu projeto do printf é o <a href="https://github.com/Tripouille/printfTester">Tripouille</a>, sendo importante ressaltar que um dos testes de ponteiro (make p - teste 09) so será correto em um ambiente MAC/IOS.

<br>
<br>

##### CRÉDITOS

<p>MCoscia<br>
Matheus Coscia / / designer gráfico</p>
