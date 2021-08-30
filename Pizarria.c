#include <stdio.h>
#include <stdlib.h>

/*1. Deverão existir 5 tipos de pizza com seus preços relacionados
2. Deverão existir 5 tipos de bebida  com seus preços relacionados
3. Mostre o cardápio ao usuário

4. O usuário poderá pedir uma ou nenhuma pizza
5.  O usuário poderá pedir uma ou nenhuma bebida
6. Mostre o valor do pedido do usuário em tela*/

void
imprimeopcao ()
{
  printf ("---------------------------- \n");
  printf ("        Opções \n");
  printf ("----------------------------\n ");

  printf ("1: Pizzas\n");
  printf (" 2: Bebidas \n\n");
  printf (" 3: Finalizar pedido \n");

  printf ("---------------------------- \n");
  return;
}

void
imprimePizza ()
{
  printf ("---------------------------- \n");

  printf ("        Pizzas \n");

  printf ("----------------------------\n ");

  printf (" 1: R$ 20,00 - Pizza Calabresa\n");
  printf (" 2: R$ 20,00 - Pizza Portuguesa \n");
  printf (" 3: R$ 20,00 - Pizza Mussarela \n");
  printf (" 4: R$ 20,00 - Pizza Queijo c/ Bacon \n");
  printf (" 5: R$ 20,00 - Pizza Frango com Catupiry \n\n");
  printf (" 6: Retornar ao menu principal \n");

  printf ("---------------------------- \n");
  return;
}

void
imprimeBebida ()
{

  printf ("---------------------------- \n");

  printf ("        Bebidas \n");

  printf ("----------------------------\n ");

  printf ("1: R$ 5,00 Suco\n");
  printf (" 2: R$ 5,00 - Refrigerante\n");
  printf (" 3 R$ 5,00 - Vinho\n");
  printf (" 4 R$ 5,00 - Cerveja\n");
  printf (" 5 R$ 5,00 - Vitamina \n\n");
  printf (" 6: Retornar ao menu principal \n");

  printf ("---------------------------- \n");

  return;
}

int
main ()
{

  int n, e;
  float p = 0;

  imprimeopcao ();
  printf ("escolha uma opção: ");
  scanf ("%d", &n);

  while (n < 3)
    {

      switch (n)
	{

	case 1:

	  imprimePizza ();
	  printf ("escolha uma opção: ");
	  scanf ("%d", &e);

	  switch (e)
	    {

	    case 1:

	      p = p + 20.00;

	      imprimePizza ();
	      printf ("escolha uma opção: ");
	      scanf ("%d", &e);

	      break;

	    case 2:

	      p = p + 20.00;

	      imprimePizza ();
	      printf ("escolha uma opção: ");
	      scanf ("%d", &e);


	      break;

	    case 3:

	      p = p + 20.00;

	      imprimePizza ();
	      printf ("escolha uma opção: ");
	      scanf ("%d", &e);


	      break;

	    case 4:

	      p = p + 20.00;

	      imprimePizza ();
	      printf ("escolha uma opção: ");
	      scanf ("%d", &e);


	      break;

	    case 5:

	      p = p + 20.00;

	      imprimePizza ();
	      printf ("escolha uma opção: ");
	      scanf ("%d", &e);


	      break;

	    case 6:

	      imprimeopcao ();

	      printf ("escolha uma opção: ");
	      scanf ("%d", &n);

	      break;

	    default:

	      printf
		("\n \nCodigo nC#o indentificado faça o pedido novamente.\n \n");

	      imprimePizza ();

	      printf ("escolha uma opção: ");
	      scanf ("%d", &e);
	    }

	}

      switch (n)
	{

	case 2:

	  imprimeBebida ();


	  printf ("escolha uma opção: ");
	  scanf ("%d", &e);

	  switch (e)
	    {

	    case 1:

	      p = p + 5.00;
	      imprimeBebida ();
	      printf ("escolha uma opção: ");
	      scanf ("%d", &e);



	      break;

	    case 2:

	      p = p + 5.00;
	      imprimeBebida ();
	      printf ("escolha uma opção: ");
	      scanf ("%d", &e);

	      break;

	    case 3:

	      p = p + 5.00;
	      imprimeBebida ();
	      printf ("escolha uma opção: ");
	      scanf ("%d", &e);


	      break;

	    case 4:

	      p = p + 5.00;
	      imprimeBebida ();
	      printf ("escolha uma opção: ");
	      scanf ("%d", &e);


	      break;

	    case 5:

	      p = p + 5.00;
	      imprimeBebida ();
	      printf ("escolha uma opção: ");
	      scanf ("%d", &e);


	      break;

	    case 6:

	      imprimeopcao ();

	      printf ("escolha uma opção: ");
	      scanf ("%d", &n);

	      break;


	    default:

	      printf
		("\n \nCodigo nC#o indentificado faça o pedido novamente.\n \n \n \n");

	      imprimeBebida ();

	      printf ("escolha uma opção: ");
	      scanf ("%d", &e);

	    }

	}

    }

  printf ("\n Pedido feito com sucesso! \n ");
  printf ("Preço a pagar é de R$%.2f \n ", p);


  return 0;
}

