# Trabajo-final-CSCOMP2
## Comandos para la ejecucion:

   ``g++ -c main.cpp -I"C:\Users\Renato\Documents\libraries\SFML-2.5.1\include ``
   
   
   ``g++ main.o -o sfml-app -L"C:\Users\Renato\Documents\libraries\SFML-2.5.1\lib" -lsfml-graphics -lsfml-window -lsfml-system  ``
   
   
   ``.\main ``
   
   
//nota estos comandos fueron simplificados con make las funciones respectivas son clean(para borrar los .o y los .hgh compile para crear los .o y .hgh y link para vincular y crear el ejecutable

## Descripcion
Se realizo como trabvajo final para el curso el videojuego de PacMan con la libreria de SFML el mapa se realizo a traves de un sketch que busca ciertos caracteress como el "#" y "." para luego remplazarlos por figuras como rectangulos de color azul y circulos respectivamete. Se creo la clase ente que en un prinicipioo tenia la funcion comestible y posicion de maera virtual, pero despus de un prueba y error se decidio convertirla en una clase abstracta con la funcion draw que permitiria dibujar a la criatura conocidacomo PacMan y a los fan6tasmas, se opto por esto ya que esta acion requiere diferentes parametros.Luego se implemento el archivo colision que en este caso verificaria que el objeto no sea capaz de trapazar el muro en este caso los "#" Para despues implementar los contadores de concumibles y la capacidad de dibujar el texto. El main contiene el sketch que va a ser convertido en el mapa a traves de la sustitucion este archivo tambien genera la patalla a base del lag y el framerate para que el programa se ejecute de manera mas fluida.

![prueba](https://github.com/RenatoUCSP1/Trabajo-final-CSCOMP2/blob/024a5694a5893094d2b370d6139c74ea4d0d06f7/img/prueba%20de%20que%20alguna%20vez.png)

Tambien se realizo la creacion de sprites que no se pudieron implementar al juego


![sprites](https://github.com/RenatoUCSP1/Trabajo-final-CSCOMP2/blob/39dc666e58c6eff247962b88312f3921b0248235/img/Ghost_red.png)


## Proyectos de inspiracion:

https://en.sfml-dev.org/forums/index.php?topic=15692.0

https://youtu.be/vC0d1rDmPBs

## Integrantes:

Renato Oscar Corrales Pe??a

## Lecciones aprendidas:

* Uso de la libreria sfml para dibujar formas

* Uso de vectores bidimensionales para dibujar un mapa y controlar la posicion de los fantasmas

* Lo importante de los algoritmos de busqueda.

* Uso de clases abstractas para el dibujo de las diferentes figuras. 

* Creacion de sptrites y manera de implementaros al juego(no se llego a implementar)

*  Se conocio ciertas alternativas para los archivos de cabecera con el    ``.hpp``

*  Uso de los vectores proporcionados por SFML como el vector2( util ya que se puede accedera su contenido sin necesidad de un get o set). 

## Desafios superados

*  El abandono del grupo y casi nula aportacion para el proyecto

*  Implementacion de la libreria SFML

*  Problemas en los archivos

*  Problemas al momento de compilar con la libereria de SFML

*  Problemas al momento de linkear (crear el ejecutable).

*  Falta de tutoriales

## Ultimo Commit
Se a??adio la carpeta ejecutable que contiene el proyecto rehecho desde cero, esto fue realizado a causa de los multiples errores encontrados esta veersion incompleta no contiene errores y puede generar una pantalla que  contiene los caracteres "#" los cuales dibujan un rectangulo azul, esta version del projecto no se pudo completar debido a la falta de tiempo
