typedef struct tipo_pilha {
	int dado;
	struct tipo_pilha *prox;
}tpilha;


void criar_pilha ();

void criar_pilha_aux ();

int pilha_vazia ();

int pilha_cheia ();

void inserir_elemento (int num);

void remover_elemento ();

void exibir_tds ();

void exibir_base ();

void inverter_elemento ();

