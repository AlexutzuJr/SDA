/* Se dă o listă de date simplu înlănțuită identificată prin pointer către primul element, numit head. Nodurile au următoarea formă:

   struct node
   {
       int val;
       struct node *next;
   }

   Să se scrie o funcție care afișează elementele listei în ordinea inversă față de cea în care se află înlănțuite, câte o valoare pe rând, urmată de caracterul newline. 
   Funcția are următorul prototip: void reverse_display(struct node *head); */


void reverse_display(struct node* head)
{
      if(head==NULL)
      {
            return;
      }

      reverse_display(head->next);
      printf("%d head->val);
}
