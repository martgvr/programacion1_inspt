# Ejercicios M2

## Variables, operadores y tipo de datos. Especificadores de formato. Entrada y salida estándar

### 1. Indicar qué es lo que se almacena en cada una de las variables indicadas a continuación, si se realizan las operaciones que se indicanen forma consecutiva:

```
int a=3, b=2, c=1, d, e;
float m=2.5, n=5.4, r, s;
```

<table style="width:100%">
    <tbody>
        <tr>
            <td>d=m; | 2</td>
            <td>e=b/c; | 2</td>
            <td>s=3.0+4; | 7.0</td>
            <td>r=a+1.0; | 4.0</td>
        </tr>
        <tr>
            <td>d=n; | 5</td>
            <td>e=c/b; | 0</td>
            <td>0-1; | -1</td>
            <td>a++; | 4</td>
        </tr>
        <tr>
            <td>e=3.7; | 3</td>
            <td>r=a+b; | 5.0</td>
            <td>a=m; | 2</td>
            <td>r++; | 1.0</td>
        </tr>
        <tr>
            <td>d=a; | 3</td>
            <td>r=a/b; | 1.0</td>
            <td>a=m/2; | 1</td>
            <td>b--; | 1</td>
        </tr>
        <tr>
            <td>d=a+b; | 5</td>
            <td>r=a/2; | 1.0</td>
            <td>a=m/2.0; | 1</td>
            <td>a+=5; | 8</td>
        </tr>
        <tr>
            <td>d=a/b; | 1</td>
            <td>r=a/2.0; | 1.5</td>
            <td>a=3.0+4; | 7</td>
            <td>s*=5; | 0.0</td>
        </tr>
        <tr>
            <td>d=a%b; | 1</td>
            <td>s=m+n; | 7.9</td>
            <td>0-1; | -1</td>
            <td></td>
        </tr>
        <tr>
            <td>d=a%2; | 1</td>
            <td>s=3+4-1; | 6.0</td>
            <td>r=a+1; | 4.0</td>
            <td></td>
        </tr>
    </tbody>
</table>
<br>

### 2. Indicar qué valor se almacena en cada variable de la izquierda de cada asignación, siendo:

```
int a, b, c, d = 0, e = 1;
int x = 2, y = 3;
```

<table style="width:100%">
    <tbody>
        <tr>
            <td>1) a = 5 > 3;</td>
            <td>1</td>
        </tr>
        <tr>
            <td>2) b = ((4 < 5) && (2 > 2));</td>
            <td>0</td>
        </tr>
        <tr>
            <td>3) a = !e;</td>
            <td>0</td>
        </tr>
        <tr>
            <td>4) b = ((x % 2 == 0) || (x - y < 10));</td>
            <td>1</td>
        </tr>
        <tr>
            <td>5) c = (d && e);</td>
            <td>0</td>
        </tr>
        <tr>
            <td>6) c = (d || e);</td>
            <td>1</td>
        </tr>
        <tr>
            <td>7) c = !(d && e);</td>
            <td>1</td>
        </tr>
        <tr>
            <td>8) c = (!d) && (!e);</td>
            <td>0</td>
        </tr>
        <tr>
            <td>9) c = (a && (!a));</td>
            <td>0</td>
        </tr>
        <tr>
            <td>10) c = (((x <= (y * 3.2)) && (y % 2 != 0)) || (1));</td>
            <td>1</td>
        </tr>
    </tbody>
</table>
<br>

### 3. Indicar cuál es la salida por pantalla para cada sentencia printf, siendo:

```
int a = 5, e = 5 > 1;
float b = 13.546;
char c = 'A';
char d = 'a';
```

<table style="width:100%">
    <tbody>
        <tr>
            <td>1) printf("a vale %d", a);</td>
            <td>a vale 5</td>
        </tr>
        <tr>
            <td>2) printf("a vale %O", a);</td>
            <td>a vale %O</td>
        </tr>
        <tr>
            <td>3) printf("a vale %X", a);</td>
            <td>a vale 5</td>
        </tr>
        <tr>
            <td>4) printf("a vale %f", a);</td>
            <td>a vale 0.0</td>
        </tr>
        <tr>
            <td>5) printf("a vale %c", a);</td>
            <td>a vale ?</td>
        </tr>
        <tr>
            <td>6) printf("b vale %d", b);</td>
            <td>b vale 13 (X)</td>
        </tr>
        <tr>
            <td>7) printf("b vale %5.2d", b);</td>
            <td>b vale ? (X)</td>
        </tr>
        <tr>
            <td>8) printf("b vale %f", b);</td>
            <td>b vale 13.546</td>
        </tr>
        <tr>
            <td>9) printf("b vale %.1f", b);</td>
            <td>b vale 13.5</td>
        </tr>
        <tr>
            <td>10) printf("b vale %.2f", b);</td>
            <td>b vale 13.54</td>
        </tr>
        <tr>
            <td>11) printf("b vale %6.4f", b);</td>
            <td>b vale 13.5460</td>
        </tr>
        <tr>
            <td>12) printf("b vale %6.1f", b);</td>
            <td>b vale 13.5</td>
        </tr>
        <tr>
            <td>13) printf("b vale %c", b);</td>
            <td>b vale ?</td>
        </tr>
        <tr>
            <td>14) printf("b vale %O", b);</td>
            <td>b vale %O</td>
        </tr>
        <tr>
            <td>15) printf("b vale %X", b);</td>
            <td>b vale ??????</td>
        </tr>
        <tr>
            <td>16) printf("c vale %d", c);</td>
            <td>c vale 65 (ascii de A)</td>
        </tr>
        <tr>
            <td>17) printf("c vale %f", c);</td>
            <td>c vale ????</td>
        </tr>
        <tr>
            <td>18) printf("c vale %c", c);</td>
            <td>c vale A</td>
        </tr>
        <tr>
            <td>19) printf("c vale %O", c);</td>
            <td>c vale %O</td>
        </tr>
        <tr>
            <td>20) printf("c vale %X", c);</td>
            <td>c vale ??? 41?</td>
        </tr>
        <tr>
            <td>21) printf("d vale %d", d);</td>
            <td>d vale 97 (ascii de a)</td>
        </tr>
        <tr>
            <td>22) printf("d vale %f", d);</td>
            <td>d vale 0.0</td>
        </tr>
        <tr>
            <td>23) printf("d vale %c", d);</td>
            <td>d vale a</td>
        </tr>
        <tr>
            <td>24) printf("d vale %O", d);</td>
            <td>d vale %O</td>
        </tr>
        <tr>
            <td>25) printf("d vale %X", d);</td>
            <td>d vale ??</td>
        </tr>
        <tr>
            <td>26) printf("e vale %d", e);</td>
            <td>e vale </td>
        </tr>
        <tr>
            <td>27) printf("e vale %f", e);</td>
            <td>e vale </td>
        </tr>
        <tr>
            <td>28) printf("e vale %c", e);</td>
            <td>e vale </td>
        </tr>
        <tr>
            <td>29) printf("e vale %O", e);</td>
            <td>e vale </td>
        </tr>
        <tr>
            <td>30) printf("e vale %X", e);</td>
            <td>e vale </td>
        </tr>
    </tbody>
</table>